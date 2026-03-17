/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_verifications.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:29:32 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/17 17:44:13 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cube3d.h"

void    execute_verifications(t_data *data)
{
    if (verify_file_extension(data->file))
        exit_error(data, "File is Invalid\n");
}
