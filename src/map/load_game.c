#include "cube3d.h"

static void load_width_height(t_game *game)
{
    int i;
    int j;
    char **map;
    int width;

    j = 0;
    width = 0;
    map = game->map.grid;
    while(map[j])
    {
        i = 0;
        while(map[j][i])
            i++;
        if(i > width)
            width = i;
        j++;
    }
    game->map.height = j;
    game->map.width = width;
}

void    load_color(t_data *data, t_game *game)
{
    game->floor.r = data->textures.fc[0];
    game->floor.g = data->textures.fc[1];
    game->floor.b = data->textures.fc[2];
    game->ceiling.r = data->textures.cc[0];
    game->ceiling.g = data->textures.cc[1];
    game->ceiling.b = data->textures.cc[2];
}

int load_map(t_data *data, t_game *game)
{
    game->map.grid = ft_vetor_dup(data->map);
    if(!game->map.grid)
    {
        put_error("failure to load the map");
        return (FALSE);
    }
    load_width_height(game);
    return (TRUE);
}

int load_components(t_data *data, t_game *game)
{
    if (!open_file(data, data->file))
        return (FALSE);
    load_color(data, game);
    if (!load_map(data, game))
    {
        put_error("failure to load map\n");
        return (FALSE);
    }
    if (!load_textures(*data, game))
    {
        put_error("failure to load textures\n");
        return (FALSE);
    }
    return (TRUE);
}
