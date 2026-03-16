/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:16:56 by thde-sou          #+#    #+#             */
/*   Updated: 2026/03/16 16:46:13 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	size_t		feedback;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		feedback = build_line(buffer, &line, fd);
		if (feedback == 0)
			break ;
		if (feedback == 2)
			return (NULL);
		if (newline(buffer))
		{
			found_rest(buffer);
			break ;
		}
		buffer[0] = '\0';
	}
	if (line && *line)
		return (line);
	free(line);
	return (NULL);
}
