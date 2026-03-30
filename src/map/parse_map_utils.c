/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 20:25:42 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/30 12:05:20 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

static int	ft_strlen_n(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

void	alloc_map_line(t_data *data, int i, int y)
{
	data->map[y] = malloc(sizeof(char) * (i + 1));
	if (!data->map[y])
	{
		ft_free_failed_vector(&data->map, y);
		exit_error(data, "Malloc Fail\n", 0);
	}
}

int	copy_map_line(t_data *data, char *line, int y)
{
	int	i;

	i = ft_strlen_n(line);
	alloc_map_line(data, i, y);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		data->map[y][i] = line[i];
		i++;
	}
	data->map[y][i] = '\0';
	return (1);
}
