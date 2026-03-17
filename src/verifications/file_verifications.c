/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_verifications.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:14:44 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/17 17:44:04 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cube3d.h"

int verify_file_extension(char *str)
{
    int len;

    len = ft_strlen(str);
    if (len < 4)
        return (0);
    return (ft_strcmp(str + len - 4, ".cub"));
}
