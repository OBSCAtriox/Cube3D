#include "cube3d.h"

void	init_textures(t_ptex *text)
{
	text->no = NULL;
	text->so = NULL;
	text->we = NULL;
	text->ea = NULL;
	text->fc[0] = 0;
	text->fc[1] = 0;
	text->fc[2] = 0;
	text->cc[0] = 0;
	text->cc[1] = 0;
	text->cc[2] = 0;
}

void	init_data(t_data *data)
{
	data->file = NULL;
	data->map = NULL;
	data->map_copy = NULL;
	data->map_max_col = 0;
	data->map_max_rows = 0;
	data->num_lines = 0;
	data->fd_check = 0;
	data->fd_load = 0;
	init_textures(&data->textures);
}
