/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:38:46 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/27 20:35:17 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
