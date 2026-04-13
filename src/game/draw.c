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
    double      draw_start;
    double      line_height;
    int         color;
    int         tex_y;
    t_texture   *texture;

    texture = get_texture(game);
    line_height = game->ray.line_height;
    draw_start = -line_height / 2 + HEIGHT / 2;
    while (*y <= game->ray.draw_end)
    {
        tex_y = ((*y - draw_start) * texture->height) / line_height;
        if (tex_y < 0)
            tex_y = 0;
        if (tex_y >= texture->height)
            tex_y = texture->height - 1;
        color = get_texture_pixel(texture, game->ray.tex_x, tex_y);
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
