/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:23:52 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/17 17:44:23 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cube3d.h"

void    exit_error(t_data *data, char *msg)
{
    if_allocated_free(data);
    write(2, msg, ft_strlen(msg));
    exit(1);
}
