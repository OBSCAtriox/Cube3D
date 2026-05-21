#include "../../includes/cube3d.h"

void	put_error(char *msg)
{
	write(2, "Error\n", 6);
	write(2, msg, ft_strlen(msg));
}

void	exit_error(t_data *data, char *msg, int f)
{
	if_allocated_free(data);
	write(2, "Error\n", 6);
	if (msg)
		write(2, msg, ft_strlen(msg));
	if (f)
		perror("");
	exit(1);
}
