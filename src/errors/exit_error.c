/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:23:52 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/13 18:36:43 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cube3d.h"

void    exit_error(t_data *data, char *msg)
{
    if_allocated_free(data);
    write(2, msg, ft_strlen(msg));
    exit(1);
}
