# include "cube3d.h"

void    cub_open(t_data *data, int *fd, char *file)
{
    *fd = open(file, O_RDONLY);
    if (*fd < 0)
         exit_error(data, NULL, 1);
}

int open_file(t_data *data, char *path)
{
    int fd;

    fd = -1;
    fd = open(path, O_RDONLY);
    if(fd == -1)
    {
        perror("Error:\n");
        return (FALSE);
    }
    data->fd_load = fd;
    return (TRUE);
}
