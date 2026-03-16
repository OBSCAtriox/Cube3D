/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:57:03 by tide-pau          #+#    #+#             */
/*   Updated: 2026/03/16 20:13:19 by tide-pau         ###   ########.fr       */
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

typedef struct s_textures
{
	char		*no;
	char		*so;
	char		*we;
	char		*ea;
	int			fc[3];
	int			cc[3];
}				t_textures;

typedef struct s_data
{
	char		*file;
	t_textures	textures;
}				t_data;

// src/inits
// struct_inits.c
void    init_data(t_data *data);
void    init_textures(t_textures *text);


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
int is_empty_line(char *line);

// src/verifications
// file_verifications.c
int				verify_file_extension(char *str);

// execute_verifications.c
void			execute_verifications(t_data *data);

// verify_allocs.c
void			if_allocated_free(t_data *data);
void	if_textures_alloc_free(t_data *data);

#endif