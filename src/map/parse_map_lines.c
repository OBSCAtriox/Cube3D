/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_lines.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:07:05 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/30 16:06:51 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

int is_valid_map_tile(char c)
{
    if (c == '1' || c == '0' || c == 'N' || c == 'S' || c == 'W' || c == 'E')
        return (1);
    else
        return (0);
}

int verify_map_cluster(t_data *d)
{
    int i;
    int y;

    y = 0;
    while (d->map[y])
    {
        i = 0;
        while (ft_isspace(d->map[y][i]))
            i++;
        while (is_valid_map_tile(d->map[y][i]))
            i++;
        while (ft_isspace(d->map[y][i]))
            i++;
        if (d->map[y][i] != '\0' && !ft_isspace(d->map[y][i]))
            return (0);
        y++;
    }
    return (1);
}

int	verify_line_borders(t_data *d)
{
	int	i;
	int	y;

	y = 0;
	while (d->map[y])
	{
		i = 0;
		while (ft_isspace(d->map[y][i]))
			i++;
		if (d->map[y][i] != '1')
			return (0);
		i = ft_strlen(d->map[y]) - 1;
        while (ft_isspace(d->map[y][i]))
			i--;
		if (d->map[y][i] != '1')
			return (0);
        y++;
	}
    return (1);
}

int verify_top_bottom_lines(t_data *d)
{
    int i;
    int y;
    
    i = 0;
    while (d->map[0][i])
    {
        if (d->map[0][i] != '1' && !ft_isspace(d->map[0][i]))
            return (0);
        i++;
    }
    y = d->num_lines - 1;
    i = 0;
    while (d->map[y][i])
    {
        if (d->map[y][i] != '1' && !ft_isspace(d->map[y][i]))
            return (0);
        i++;
    }
    return (1);
}

/* void    flood_fill(t_data *data)
{
    
} */