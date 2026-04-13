#include "../../includes/cube3d.h"

int run_game(t_data *data, t_game *game)
{
    if(!open_window(game))
        return (FALSE);
    if(!init_player(data, game))
        return (FALSE);
    render_frame(game);
    mlx_loop(game->mlx);
    return (TRUE);
}