/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:38:46 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/19 14:47:45 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cube3d.h"

void    cub_open(t_data *data, int *fd, char *file)
{
    *fd = open(file, O_RDONLY);
    if (*fd < 0)
         exit_error(data, NULL, 1);
}
