/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cub_identifiers_utils.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:28:15 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/27 12:31:01 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

int	is_empty_line(char *line)
{
	if (!line)
		return (1);
	while (*line)
	{
		if (*line != ' ' && *line != '\t' && *line != '\n')
			return (0);
		line++;
	}
	return (1);
}

int	if_not_line_identifier_parse(t_data *data, char *line, char *orig, int fd)
{
	if (!line_identifier_parse(data, line))
	{
		free(orig);
		close(fd);
		return (0);
	}
	return (1);
}
