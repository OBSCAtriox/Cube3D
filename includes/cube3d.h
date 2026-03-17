/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:57:03 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/17 17:43:42 by thiago           ###   ########.fr       */
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

typedef struct s_data
{
	char	*file;
}			t_data;

// src/errors
// exit_errors.c
void			exit_error(t_data *data, char *msg);

// src/verifications
// file_verifications.c
int			verify_file_extension(char *str);

// execute_verifications.c
void    execute_verifications(t_data *data);

// verify_allocs.c
void if_allocated_free(t_data *data);

#endif