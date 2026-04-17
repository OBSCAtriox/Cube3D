# include "cube3d.h"

int if_tab(char *line)
{
    int i;

    if (!line)
        return (0);
    i = 0;
    while (line[i])
    {
        if (line[i] == '\t')
            return (1);
        i++;
    }
    return (0);
}

int contains_tabs(t_data *data)
{
    int fd;
    char *line;

    fd = -1;
    cub_open(data, &fd, data->file);
    line = ft_gnl(fd);
    while (line)
    {
        if (if_tab(line))
        {
            close(fd);
            free(line);
            return (1);
        }
        free(line);
        line = ft_gnl(fd);
    }
    close(fd);
    return (0);
}

int verify_map_exist(t_data *data)
{
    int fd;
    char *line;

    fd = -1;
    cub_open(data, &fd, data->file);
    line = skip_to_map_start(fd);
    if (!line)
        line = ft_gnl(fd);
    while (line)
    {
        if (!is_empty_line(line))
        {
            free(line);
            close(fd);
            return (1);
        }
        free(line);
        line = ft_gnl(fd);
    }
    close(fd);
    return (0);
}
