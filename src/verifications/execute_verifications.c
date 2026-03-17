/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_verifications.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:29:32 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/17 12:30:27 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

void	execute_verifications(t_data *data)
{
	if (!verify_rgb(data))
		exit_error(data, "Error: invalid color\n");
	if (!verify_duplicate(&data->textures))
		exit_error(data, "Error: duplicate found\n");
}
