/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cub_identifiers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:35:21 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/16 20:16:29 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

char	*trim_lead(char *str)
{
	if (!str)
		return (NULL);
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	return (str);
}

int	parse_floor_color(t_data *data, char *line)
{
	int	start;
	int	i;
	int	k;

	if (!line || !*line)
		return (0);
	i = 0;
	k = 0;
	while (line[i] && k < 3)
	{
		start = i;
		while (ft_isdigit(line[i]))
			i++;
		if (i == start)
			return (0);
		data->textures.fc[k++] = ft_atoi(line + start);
		if (line[i] == ',')
			i++;
	}
	return (k == 3);
}

int	parse_ceilling_color(t_data *data, char *line)
{
	int	start;
	int	i;
	int	k;

	if (!line || !*line)
		return (0);
	i = 0;
	k = 0;
	while (line[i] && k < 3)
	{
		start = i;
		while (ft_isdigit(line[i]))
			i++;
		if (i == start)
			return (0);
		data->textures.cc[k++] = ft_atoi(line + start);
		if (line[i] == ',')
			i++;
	}
	return (k == 3);
}

int	line_identifier_parse(t_data *data, char *line)
{
	if (ft_strncmp(line, "NO ", 3) == 0)
		data->textures.no = ft_strdup(line + 3);
	else if (ft_strncmp(line, "SO ", 3) == 0)
		data->textures.so = ft_strdup(line + 3);
	else if (ft_strncmp(line, "WE ", 3) == 0)
		data->textures.we = ft_strdup(line + 3);
	else if (ft_strncmp(line, "EA ", 3) == 0)
		data->textures.ea = ft_strdup(line + 3);
	else if (ft_strncmp(line, "F ", 2) == 0)
	{
		if (!parse_floor_color(data, line + 2))
			return (0);
	}
	else if (ft_strncmp(line, "C ", 2) == 0)
	{
		if (!parse_ceilling_color(data, line + 2))
			return (0);
	}
	else
		return (0);
	return (1);
}

int	parse_identifiers(t_data *data)
{
    char *orig;
	char	*line;
	int		fd;
    int count;

    count = 0;
	fd = open(data->file, O_RDONLY);
	if (fd < 0)
		return (0);
	while ((line = get_next_line(fd)) != NULL)
	{   
        if (is_empty_line(line))
        {
            free(line);
            continue;
        }
        orig = line;
		line = trim_lead(line);
		if (!line_identifier_parse(data, line))
        {
            free(orig);
            close(fd);
			return (0);
        }
        free(orig);
        count++;
        if (count == 6)
            break ;
	}
	close(fd);
	return (1);
}
