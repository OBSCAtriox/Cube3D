#include "cube3d.h"

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
    return (TRUE);
}
