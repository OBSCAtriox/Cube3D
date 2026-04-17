# include "cube3d.h"

void    image_remove_end_spaces(t_data *data)
{
    remove_end_spaces(data->textures.no);
    remove_end_spaces(data->textures.so);
    remove_end_spaces(data->textures.we);
    remove_end_spaces(data->textures.ea);
}
