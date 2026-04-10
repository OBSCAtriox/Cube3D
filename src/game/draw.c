# include "cube3d.h"

void    draw_ceilling(t_game *game, int x, int *y)
{
    while (*y < game->ray.draw_start)
    {
        put_pixel(&game->screen, x, *y, game->ceiling.value);
        (*y)++;
    }
}

void    draw_wall(t_game *game, int x, int *y)
{
    double draw_start;
    double line_height;
    int color;
    int tex_y;
    
    line_height = game->ray.line_height;
    draw_start = game->ray.draw_start;
    while (*y <= game->ray.draw_end)
    {
        tex_y = ((*y - draw_start) * get_texture(game)->height) / line_height;
        color = get_texture_pixel(get_texture(game), game->ray.tex_x, tex_y);
        put_pixel(&game->screen, x, *y, color);
        (*y)++;
    }
}

void    draw_floor(t_game *game, int x, int *y)
{
    while (*y < HEIGHT)
    {
        put_pixel(&game->screen, x, *y, game->floor.value);
        (*y)++;
    }
}

void    draw_column(t_game *game, int x)
{
    int y;

    y = 0;
    draw_ceilling(game, x, &y);
    draw_wall(game, x, &y);
    draw_floor(game, x, &y);
}
