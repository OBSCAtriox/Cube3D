#include "cube3d.h"

static double get_speed(t_game *game)
{
    int run_speed;

    run_speed = 1;
    if (game->player.running == TRUE)
        run_speed = 2;
    return (SPEED * run_speed);
}

void    move_forward(t_game *game)
{
	char	**map;
	double	pos_y;
	double	pos_x;
	double	dir_x;
	double	dir_y;

    map = game->map.grid;
    pos_y = game->player.pos_y;
    pos_x = game->player.pos_x;
    dir_x = game->player.dir_x;
    dir_y = game->player.dir_y;
    if(map[(int)(pos_y)][(int)(pos_x + dir_x * get_speed(game))] == '0')
        game->player.pos_x += dir_x * get_speed(game);
    if(map[(int)(pos_y + dir_y * get_speed(game))][(int)pos_x] == '0')
        game->player.pos_y += dir_y * get_speed(game);
}

void	move_backward(t_game *game)
{
	char	**map;
	double	pos_y;
	double	pos_x;
	double	dir_x;
	double	dir_y;

    map = game->map.grid;
    pos_y = game->player.pos_y;
    pos_x = game->player.pos_x;
    dir_x = game->player.dir_x;
    dir_y = game->player.dir_y;
    if(map[(int)(pos_y)][(int)(pos_x - dir_x * get_speed(game))] == '0')
        game->player.pos_x -= dir_x * get_speed(game);
    if(map[(int)(pos_y - dir_y * get_speed(game))][(int)pos_x] == '0')
        game->player.pos_y -= dir_y * get_speed(game);
}

void	move_right(t_game *game)
{
	char	**map;
	double	pos_y;
	double	pos_x;
	double	plane_x;
	double	plane_y;

    map = game->map.grid;
    pos_y = game->player.pos_y;
    pos_x = game->player.pos_x;
    plane_x = game->player.plane_x;
    plane_y = game->player.plane_y;
    if(map[(int)(pos_y)][(int)(pos_x + plane_x * get_speed(game))] == '0')
        game->player.pos_x += plane_x * get_speed(game);
    if(map[(int)(pos_y + plane_y * get_speed(game))][(int)pos_x] == '0')
        game->player.pos_y += plane_y * get_speed(game);
}

void	move_left(t_game *game)
{
	char	**map;
	double	pos_y;
	double	pos_x;
	double	plane_x;
	double	plane_y;

    map = game->map.grid;
    pos_y = game->player.pos_y;
    pos_x = game->player.pos_x;
    plane_x = game->player.plane_x;
    plane_y = game->player.plane_y;
    if(map[(int)(pos_y)][(int)(pos_x - plane_x * get_speed(game))] == '0')
        game->player.pos_x -= plane_x * get_speed(game);
    if(map[(int)(pos_y - plane_y * get_speed(game))][(int)pos_x] == '0')
        game->player.pos_y -= plane_y * get_speed(game);
}
