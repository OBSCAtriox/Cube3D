/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:56:20 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/16 20:20:33 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	init_data(&data);
	if (argc != 2)
		exit_error(&data, "Error\n");
	data.file = ft_strdup(argv[1]);
	execute_verifications(&data);
	if (!parse_identifiers(&data))
		exit_error(&data, "ErrorTEST\n");
	printf("%s\n", data.textures.no);
	printf("%s\n", data.textures.so);
	printf("%s\n", data.textures.ea);
	printf("%s\n", data.textures.we);
	printf("Floor: %d,%d,%d\nCeilling: %d,%d,%d\n", data.textures.fc[0],
		data.textures.fc[1], data.textures.fc[2], data.textures.cc[0],
		data.textures.cc[1], data.textures.cc[2]);
	if_allocated_free(&data);
	return (0);
}
