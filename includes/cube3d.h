/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:57:03 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/21 21:59:37 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE3D_H
# define CUBE3D_H

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include "game.h"

typedef struct s_data
{
	char	*file;
	int		fd_check;
	int		fd_load;
	char	*flag_texture[5];
}			t_data;
// src/errors
// exit_errors.c
void			exit_error(t_data *data, char *msg);
void    put_error(char *msg);

// src/verifications
// file_verifications.c
int			verify_file_extension(char *str);

// execute_verifications.c
void    execute_verifications(t_data *data);

// verify_allocs.c
void if_allocated_free(t_data *data);

// file
void open_file(t_data *data, char *path);

//inits
void    init_struct(t_game *game, t_data *data);

#endif