/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:10:41 by thiago            #+#    #+#             */
/*   Updated: 2026/04/22 17:19:27 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	line_len(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

static void	safe_buf(char *buf)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		i++;
	while (buf[i])
		buf[j++] = buf[i++];
	buf[j] = '\0';
}

static char	*mount_line(char *line, char *buf)
{
	int		i;
	int		j;
	int		size;
	char	*out;

	i = 0;
	j = 0;
	size = line_len(line) + line_len(buf) + 1;
	out = malloc(sizeof(char) * size);
	if (!out)
		return (NULL);
	if (line)
	{
		while (line[j])
			out[i++] = line[j++];
	}
	j = 0;
	while (buf[j] && buf[j] != '\n')
		out[i++] = buf[j++];
	if (buf[j] == '\n')
		out[i++] = '\n';
	out[i] = '\0';
	free(line);
	return (out);
}

static int	gnl_aux(char *buf, char *line)
{
	if (!line)
		return (1);
	if (ft_strchr(buf, '\n'))
	{
		safe_buf(buf);
		return (1);
	}
	buf[0] = '\0';
	return (0);
}

/**
 * Reads a line from a file descriptor.
 *
 * This function reads from the given file descriptor and returns
 * a line including the newline character if present. It keeps
 * internal buffers for multiple file descriptors.
 *
 * @param fd The file descriptor to read from.
 * @return The next line read, or NULL on EOF or error.
 */
char	*ft_gnl(int fd)
{
	static char	buf[MAX_FD][BUFFER_SIZE + 1];
	char		*line;
	int			n;

	n = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= MAX_FD)
		return (NULL);
	line = NULL;
	while (n > 0)
	{
		if (buf[fd][0] == '\0')
		{
			n = read(fd, buf[fd], BUFFER_SIZE);
			if (n <= 0)
				break ;
			buf[fd][n] = '\0';
		}
		line = mount_line(line, buf[fd]);
		if (gnl_aux(buf[fd], line))
			break ;
	}
	if (line && line[0] != '\0')
		return (line);
	free(line);
	return (NULL);
}
