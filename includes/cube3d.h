/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:57:03 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/26 18:25:40 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE3D_H
# define CUBE3D_H

# include "../gnl/get_next_line.h"
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_ptex
{
	char		*no;
	char		*so;
	char		*we;
	char		*ea;
	int			fc[3];
	int			cc[3];
}				t_ptex;

typedef struct s_data
{
	char		*file;
	t_ptex	textures;
}				t_data;

// src/inits
// struct_inits.c
void			init_data(t_data *data);
void			init_textures(t_ptex *text);

// src/errors
// exit_errors.c
void			exit_error(t_data *data, char *msg);

// src/map
// parse_cub_identifiers.c
char			*trim_lead(char *str);
int				parse_floor_color(t_data *data, char *line);
int				parse_ceilling_color(t_data *data, char *line);
int				line_identifier_parse(t_data *data, char *line);
int				parse_identifiers(t_data *data);

// parse_cub_identifiers_utils.c
int				is_empty_line(char *line);
int				if_not_line_identifier_parse(t_data *data, char *line,
					char *orig, int fd);

// src/verifications
// file_verifications.c
int				verify_file_extension(char *str);
int	verify_rgb(t_data *data);
int verify_duplicate(t_textures *tex);

// execute_verifications.c
void			execute_verifications(t_data *data);

// verify_allocs.c
void			if_allocated_free(t_data *data);
void			if_textures_alloc_free(t_data *data);

#endif