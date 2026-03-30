/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:37:13 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/30 13:58:18 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cube3d.h"

int is_identifier_line(char *line)
{
    
    if (!line)
        return (0);
    if (!ft_strncmp(line, "NO ", 3))
        return (1);
    if (!ft_strncmp(line, "SO ", 3))
        return (1);
    if (!ft_strncmp(line, "WE ", 3))
        return (1);
    if (!ft_strncmp(line, "EA ", 3))
        return (1);
    if (!ft_strncmp(line, "F ", 2))
        return (1);
    if (!ft_strncmp(line, "C ", 2))
        return (1);
    return (0);
}

void map_count_lines(t_data *data, int fd)
{
    char *line;
    int count;
    
    count = 0;
    line = ft_gnl(fd);
    while (line && is_empty_line(line))
    {
        free(line);
        line = ft_gnl(fd);
    }
    while (line)
    {
        if (!is_empty_line(line))
            count++;
        free(line);
        line = ft_gnl(fd);
    }
    data->num_lines = count;
}

char *skip_to_map_start(int fd)
{
    char *tmp;
    char *line;

    line = ft_gnl(fd);
    while (line)
    {
        tmp = trim_lead(line);
        if (is_empty_line(tmp))
        {
            free(line);
            line = ft_gnl(fd);
            continue ;
        }
        if (is_identifier_line(tmp))
        {
            free(line);
            line = ft_gnl(fd);
            continue ;   
        }
        return (line);
    }
    return (NULL);
}

int create_parse_map(t_data *data)
{
    char *line;
    int y;
    int fd;

    cub_open(data, &fd, data->file);
    data->map = malloc(sizeof(char *) * (data->num_lines + 1));
    if (!data->map)
        return (0);
    line = skip_to_map_start(fd);
    if (is_empty_line(line))
    {
        free(line);
        line = ft_gnl(fd);
    }
    y = 0;
    while (line && !is_empty_line(line))
    {
        copy_map_line(data, line, y++);
        free(line);
        line = ft_gnl(fd);
    }
    int i = 0;
    while (data->map[i])
        printf("%s\n", data->map[i++]);
    return (1);
}

/* char **parse_map(t_data *data, int fd)
{
    
} */
