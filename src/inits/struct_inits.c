/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_inits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:03:45 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/19 14:51:11 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

void	init_textures(t_textures *text)
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
