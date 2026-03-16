/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_verifications.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:14:44 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/16 16:10:35 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cube3d.h"

int verify_file_extension(char *str)
{
    int len;

    len = ft_strlen(str);
    if (len < 4)
        return (1);
    return (ft_strcmp(str + len - 4, ".cub"));
}
