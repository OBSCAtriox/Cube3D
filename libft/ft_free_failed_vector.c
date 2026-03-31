#include "libft.h"

void	ft_free_failed_vector(char ***vector, int idx)
{
	int	i;

	if (!vector || !*vector)
		return ;
	i = 0;
	while (i < idx)
	{
		free((*vector)[i]);
		(*vector)[i] = NULL;
		i++;
	}
	free(*vector);
	*vector = NULL;
}
