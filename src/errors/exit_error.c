/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:23:52 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/19 20:40:07 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cube3d.h"

void    put_error(char *msg)
{
    write(2, "Error\n", 6);
    write(2, msg, ft_strlen(msg));
}

void    exit_error(t_data *data, char *msg)
{
    if_allocated_free(data);
    write(2, msg, ft_strlen(msg));
    exit(1);
}
