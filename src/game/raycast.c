#include "cube3d.h"

static void    calc_step_side_dist(t_game *game)
{
    if (game->ray.ray_dir_x < 0)
    {
        game->ray.step_x = -1;
        game->ray.side_dist_x = (game->player.pos_x - game->ray.map_x) * game->ray.delta_dist_x;
    }
    else
    {
        game->ray.step_x = 1;
        game->ray.side_dist_x = (game->player.pos_x + 1.0 - game->ray.map_x) * game->ray.delta_dist_x;
    }
    if (game->ray.ray_dir_y < 0)
    {
        game->ray.step_y = -1;
        game->ray.side_dist_y = (game->player.pos_y - game->ray.map_y) * game->ray.delta_dist_y;
    }
    else
    {
        game->ray.step_y = 1;
        game->ray.side_dist_y = (game->player.pos_y + 1.0 - game->ray.map_y) * game->ray.delta_dist_y;
    }
}

void init_ray(t_game *game, int x)
{
    game->ray.camera_x = 2 * (x / (double)WIDTH) - 1;
    game->ray.ray_dir_x = game->player.dir_x + game->player.plane_x * game->ray.camera_x;
    game->ray.ray_dir_y = game->player.dir_y + game->player.plane_y * game->ray.camera_x;
    game->ray.map_x = (int)game->player.pos_x;
    game->ray.map_y = (int)game->player.pos_y;
    game->ray.delta_dist_x = fabs(1 / game->ray.ray_dir_x);
    game->ray.delta_dist_y = fabs(1 / game->ray.ray_dir_y);
    calc_step_side_dist(game);
}
