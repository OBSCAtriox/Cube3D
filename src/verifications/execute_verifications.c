/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_verifications.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:29:32 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/16 20:20:25 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

void	execute_verifications(t_data *data)
{
	if (verify_file_extension(data->file))
		exit_error(data, "File is Invalid\n");
}
