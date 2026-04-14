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
	data->map_copy = NULL;
	data->map_max_col = 0;
	data->map_max_rows = 0;
	data->num_lines = 0;
	data->fd_check = 0;
	data->fd_load = 0;
	init_textures(&data->textures);
	data->flag_texture[0] = "NO";
    data->flag_texture[1] = "SO";
    data->flag_texture[2] = "WE";
    data->flag_texture[3] = "EA";
    data->flag_texture[4] = NULL;
}
