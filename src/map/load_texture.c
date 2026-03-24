#include "../../includes/cube3d.h"

void open_file(t_data *data, char *path)
{
    int fd[2];
    int i;

    i = 0;
    fd[0] = -1;
    fd[1] = -1;
    while(i < 2)
    {
        fd[i] = open(path, O_RDONLY);
        if(fd[i] == -1)
        {
            perror("Error\n");
            exit(EXIT_FAILURE);
        }
        i++;
    }
    data->fd_check = fd[0];
    data->fd_load = fd[1];
}

static int read_texture(char *line, t_data data)
{
    int     i;

    i = 0;
    if(ft_memmem()) //falta terminar
}

void    load_textures(t_data data, t_game *game)
{
    char    *line;
    int     i;
    int     n_texture;

    i = 0;
    n_texture = 4;
    line = NULL;
    while(n_texture > 0)
    {
        line = get_next_line(data.fd_load);
        if(!line)
            return;
        
    }
}
