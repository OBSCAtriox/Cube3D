#include "cube3d.h"

void	init_textures(t_ptex *text)
{
	text->no = NULL;
	text->so = NULL;
	text->we = NULL;
	text->ea = NULL;
}

void	init_data(t_data *data)
{
	data->file = NULL;
	data->map = NULL;
	data->num_lines = 0;
	data->mlx = NULL;
	data->win = NULL;
	init_textures(&data->textures);
}
