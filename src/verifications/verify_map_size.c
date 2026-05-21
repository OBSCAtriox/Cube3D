#include "cube3d.h"

int	verify_map_size(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[i])
		i++;
	if (data->map_max_col > 500 || i > 500)
		return (FALSE);
	return (TRUE);
}
