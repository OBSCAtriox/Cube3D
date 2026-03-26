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
# include "game.h"

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
	char		**map;
	int			num_lines;
	void		*mlx;
	void		*win;
	int			fd_check;
	int			fd_load;
	char		*flag_texture[5];
	t_ptex		textures;
}				t_data;

// src/inits
// struct_inits.c
void			init_data(t_data *data);
void			init_textures(t_ptex *text);

// src/errors
// exit_errors.c
void			exit_error(t_data *data, char *msg, int f);

// src/map
// parse_cub_identifiers.c
char			*trim_lead(char *str);
int				parse_floor_color(t_data *data, char *line);
int				parse_ceilling_color(t_data *data, char *line);
int				line_identifier_parse(t_data *data, char *line);
int				parse_identifiers(t_data *data, int fd);

// parse_cub_identifiers_utils.c
int				is_empty_line(char *line);
int				if_not_line_identifier_parse(t_data *data, char *line,
					char *orig, int fd);

// parse_map.c
int				is_identifier_line(char *line);
char			*skip_to_map_start(int fd);
void				map_count_lines(t_data *data, int fd);

// open_utils
// open.c
void    cub_open(t_data *data, int *fd, char *file);

// src/verifications
// file_verifications.c
int				verify_file_extension(char *str);
int				verify_rgb(t_data *data);
int				verify_duplicate(t_ptex *tex);
void			verify_empty_file(t_data *data, char *file);
void			verify_onlyspaces_file(t_data *data);

// execute_verifications.c
void			execute_verifications(t_data *data);

// verify_allocs.c
void			if_allocated_free(t_data *data);
void			if_textures_alloc_free(t_data *data);

#endif