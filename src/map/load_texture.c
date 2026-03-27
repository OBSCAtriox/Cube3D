#include "../../includes/cube3d.h"

static char  *cat_path_texture(char *prt)
{
    int i;
    int j;
    char *path;

    i = 0;
    j = 0;
    while(ft_isspace(prt[i]))
        i++;
    path = malloc((ft_strlen(&prt[i]) + 1) * sizeof(char));
    if(!path)
        return (NULL);
    while(prt[i] && prt[i] != '\n')
    {
        path[j] = prt[i];
        j++;
        i++;
    }
    path[j] = '\0';
    return (path);
}

static t_texture    *get_slot_texture(t_game *game, char *flag)
{
    t_tex *slot;

    slot = &game->tex;
    if(ft_strcmp(flag, "NO") == 0)
        return (&slot->north);
    if(ft_strcmp(flag, "SO") == 0)
        return (&slot->south);
    if(ft_strcmp(flag, "WE") == 0)
        return (&slot->west);
    if(ft_strcmp(flag, "EA") == 0)
        return (&slot->east);
    return (NULL);
}

static int  upload_texture(t_game *game, char *flag, char *path)
{
    t_texture *slot;

    slot = get_slot_texture(game, flag);
    if(!slot)
        return (FALSE);
    slot->img.img_ptr = mlx_xpm_file_to_image(game->mlx, path, &slot->width, &slot->height);
    if(!slot->img.img_ptr)
        return (FALSE);
    slot->img.addr = mlx_get_data_addr(slot->img.img_ptr, &slot->img.bpp, &slot->img.line_len, &slot->img.endian);
    if(!slot->img.addr)
        return (FALSE);
    return (TRUE);
} 

static char *found_path(char *line, t_data data, char **flag)
{
    int     i;
    char    *prt;
    char    *path;

    i = 0;
    while (i < 4)
    {
        prt = ft_memmem(line, ft_strlen(line), data.flag_texture[i], 2);
        if(prt)
        {
            if(ft_isspace(prt[2]))
            {
                path = cat_path_texture(&prt[2]);
                if(!path)
                    return (NULL);
                *flag = data.flag_texture[i];
                return (path);
            }
        }
        i++;
    }
    return (NULL);
}

int    load_textures(t_data data, t_game *game)
{
    char    *line;
    char    *path;
    char    *flag;
    int     n_texture;

    n_texture = 0;
    while (n_texture < 4)
    {
        line = ft_gnl(data.fd_load);
        if (!line)
            return (FALSE);
        path = found_path(line, data, &flag);
        if (path)
        {
            if (!upload_texture(game, flag, path))
            {
                ft_clean_2(&path, &line);
                return (FALSE);
            }
            n_texture++;
            free(path);
        }
        free(line);
    }
    return (TRUE);
}
