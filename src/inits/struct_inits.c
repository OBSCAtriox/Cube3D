/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_inits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:03:45 by tide-pau          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/03/26 18:25:51 by thiago           ###   ########.fr       */
=======
/*   Updated: 2026/03/19 14:51:11 by tide-pau         ###   ########.fr       */
>>>>>>> 0f48d1871a934b77457a38491eea63728e25fc8d
/*                                                                            */
/* ************************************************************************** */

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
	data->num_lines = 0;
	data->mlx = NULL;
	data->win = NULL;
	init_textures(&data->textures);
}
