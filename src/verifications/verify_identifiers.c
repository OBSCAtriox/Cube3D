/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_identifiers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:02:31 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/26 18:25:25 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

int	verify_rgb(t_data *data)
{
	int i;

	i = 0;
	while (i < 3)
	{
		if (data->textures.fc[i] >= 0 && data->textures.fc[i] <= 255)
			;
		else
            return (0);
        if (data->textures.cc[i] >= 0 && data->textures.cc[i] <= 255)
            ;
        else
            return (0);
        i++;
	}
    return (1);
}

int verify_duplicate(t_ptex *tex)
{
    if (ft_strcmp(tex->no, tex->so) == 0)
        return (0);
    if (ft_strcmp(tex->no, tex->we) == 0)
        return (0);
    if (ft_strcmp(tex->no, tex->ea) == 0)
        return (0);
    if (ft_strcmp(tex->so, tex->we) == 0)
        return (0);
    if (ft_strcmp(tex->so, tex->ea) == 0)
        return (0);
    if (ft_strcmp(tex->we, tex->ea) == 0)
        return (0);
    return (1);
}
