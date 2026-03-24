#include "../../includes/cube3d.h"

void    init_struct(t_game *game, t_data *data)
{
    game->mlx = NULL;
    game->win = NULL;
    game->screen.img_ptr = NULL;
    game->screen.addr = NULL;
    game->map.grid = NULL;
    game->tex.north.img.img_ptr = NULL;
    game->tex.north.img.addr = NULL;
    game->tex.south.img.img_ptr = NULL;
    game->tex.south.img.addr = NULL;
    game->tex.east.img.img_ptr = NULL;
    game->tex.east.img.addr = NULL;
    game->tex.west.img.img_ptr = NULL;
    game->tex.west.img.addr = NULL;
    data->flag_texture[0] = "NO";
    data->flag_texture[1] = "SO";
    data->flag_texture[2] = "WE";
    data->flag_texture[3] = "EA";
    data->flag_texture[4] = NULL;
}
