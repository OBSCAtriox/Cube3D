#include "../../includes/cube3d.h"

static int    define_pos_player_NS(t_data *data, t_game *game)
{
    if(data->p_looking_dir == 'N')
    {
        game->player.dir_x = 0;
        game->player.dir_y = -1;
        game->player.plane_x = 0.66;
        game->player.plane_y = 0;
        return (TRUE);
    }
    else if(data->p_looking_dir == 'S')
    {
        game->player.dir_x = 0;
        game->player.dir_y = 1;
        game->player.plane_x = -0.66;
        game->player.plane_y = 0;
        return (TRUE);
    }
    return (FALSE);
}

static int    define_pos_player_EW(t_data *data, t_game *game)
{
     if(data->p_looking_dir == 'E')
    {
        game->player.dir_x = 1;
        game->player.dir_y = 0;
        game->player.plane_x = 0;
        game->player.plane_y = 0.66;
        return (TRUE);
    }
    else if(data->p_looking_dir == 'W')
    {
        game->player.dir_x = -1;
        game->player.dir_y = 0;
        game->player.plane_x = 0;
        game->player.plane_y = -0.66;
        return (TRUE);
    }
    return (FALSE);
}

int init_player(t_data *data, t_game *game)
{
    if(define_pos_player_NS(data, game))
        return (TRUE);
    else if(define_pos_player_EW(data, game))
        return (TRUE);
    put_error("failure to position of player");
    return (FALSE);
}