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

void render_frame(t_game *game)
{
    int x = 0;

    while (x < WIDTH)
    {
        cast_ray(game, x);
        draw_column(game, x);
        x++;
    }

    mlx_put_image_to_window();
}

void cast_ray(t_game *game, int x)
{
    init_ray(game, x);
    set_step_and_side_dist(game);
    perform_dda(game);
    calculate_wall_projection(game);
    choose_texture(game);
}
