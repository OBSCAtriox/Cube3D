# include "cube3d.h"

int key_press(int keycode, t_game *game)
{
    if (keycode == KEY_W)
        game->keys.w = TRUE;
    if (keycode == KEY_S)
        game->keys.s = TRUE;
    if (keycode == KEY_A)
        game->keys.a = TRUE;
    if (keycode == KEY_D)
        game->keys.d = TRUE;
    if (keycode == KEY_LEFT)
        game->keys.left = TRUE;
    if (keycode == KEY_RIGHT)
        game->keys.right = TRUE;
    if (keycode == KEY_UP)
        game->keys.up = TRUE;
    if (keycode == KEY_DOWN)
        game->keys.down = TRUE;
    if (keycode == ESC)
        close_game(game);
    if (keycode == KEY_SHIFT)
        game->player.running = TRUE;
    return (0);    
}

int key_realease(int keycode, t_game *game)
{
    if (keycode == KEY_W)
        game->keys.w = FALSE;
    if (keycode == KEY_S)
        game->keys.s = FALSE;
    if (keycode == KEY_A)
        game->keys.a = FALSE;
    if (keycode == KEY_D)
        game->keys.d = FALSE;
    if (keycode == KEY_LEFT)
        game->keys.left = FALSE;
    if (keycode == KEY_RIGHT)
        game->keys.right = FALSE;
    if (keycode == KEY_UP)
        game->keys.up = FALSE;
    if (keycode == KEY_DOWN)
        game->keys.down = FALSE;
    if (keycode == KEY_SHIFT)
        game->player.running = FALSE;
    return (0);
}

void    update_player(t_game *game)
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
