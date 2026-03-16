/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:17:25 by thde-sou          #+#    #+#             */
/*   Updated: 2026/03/16 16:46:02 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	found_rest(char *buffer)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (buffer[a] && buffer[a] != '\n')
		a++;
	if (buffer[a] == '\n')
		a++;
	while (buffer[a])
		buffer[b++] = buffer[a++];
	buffer[b] = '\0';
}

static char	*ft_strjoin(char *s1, char const *s2)
{
	char	*res;
	size_t	a;
	size_t	b;
	size_t	len1;
	size_t	len2;

	a = 0;
	b = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (free(s1), NULL);
	while (a < len1)
		res[b++] = s1[a++];
	a = 0;
	while (a < len2)
	{
		res[b++] = s2[a];
		if (s2[a++] == '\n')
			break ;
	}
	res[b] = '\0';
	free(s1);
	return (res);
}

size_t	ft_strlen(char const *s)
{
	size_t	a;

	a = 0;
	if (!s)
		return (0);
	while (s[a] && s[a] != '\n')
		a++;
	if (s[a] == '\n')
		a++;
	return (a);
}

int	newline(char *s)
{
	while (*s)
	{
		if (*s == '\n')
			return (1);
		s++;
	}
	return (0);
}

int	build_line(char *buffer, char **line, int fd)
{
	ssize_t	bytes;

	if (*buffer == '\0')
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(*line), 2);
		if (bytes == 0)
			return (0);
		buffer[bytes] = '\0';
	}
	*line = ft_strjoin(*line, buffer);
	if (!*line)
		return (2);
	return (1);
}
