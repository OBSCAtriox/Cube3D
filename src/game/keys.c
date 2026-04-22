#include "cube3d.h"

int	key_press(int keycode, t_game *game)
{
	if (keycode == KEY_W)
		game->keys.w = 1;
	if (keycode == KEY_S)
		game->keys.s = 1;
	if (keycode == KEY_A)
		game->keys.a = 1;
	if (keycode == KEY_D)
		game->keys.d = 1;
	if (keycode == KEY_LEFT)
		game->keys.left = 1;
	if (keycode == KEY_RIGHT)
		game->keys.right = 1;
	if (keycode == KEY_UP)
		game->keys.up = 1;
	if (keycode == KEY_DOWN)
		game->keys.down = 1;
	if (keycode == ESC)
		close_game(game);
	return (0);
}

int	key_realease(int keycode, t_game *game)
{
	if (keycode == KEY_W)
		game->keys.w = 0;
	if (keycode == KEY_S)
		game->keys.s = 0;
	if (keycode == KEY_A)
		game->keys.a = 0;
	if (keycode == KEY_D)
		game->keys.d = 0;
	if (keycode == KEY_LEFT)
		game->keys.left = 0;
	if (keycode == KEY_RIGHT)
		game->keys.right = 0;
	if (keycode == KEY_UP)
		game->keys.up = 0;
	if (keycode == KEY_DOWN)
		game->keys.down = 0;
	return (0);
}

void	update_player(t_game *game)
{
	if (game->keys.w)
		move_forward(game);
	if (game->keys.s)
		move_backward(game);
	if (game->keys.a)
		move_left(game);
	if (game->keys.d)
		move_right(game);
	if (game->keys.right)
		rotate_right(game);
	if (game->keys.left)
		rotate_left(game);
	if (game->keys.up)
		rotate_up_down(game, 1);
	if (game->keys.down)
		rotate_up_down(game, -1);
}
