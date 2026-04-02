#include "../../includes/cube3d.h"

int    open_window(t_game *game)
{
    game->win = mlx_new_window(game->mlx, 1200, 800, "cub3d");
    if(!game->win)
    {
        put_error("failure to create window\n");
        return (FALSE);
    }
    return (TRUE);
}

/* int render_frame(t_game *game)
{
    draw_ceiling_floor();
} */
