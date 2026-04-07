#ifndef CUBE3D_H
# define CUBE3D_H

# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include "game.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <unistd.h>

# define FALSE 0
# define TRUE 1

typedef struct s_ptex
{
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	int		fc[3];
	int		cc[3];
}			t_ptex;

typedef struct s_data
{
	char	*file;
	char	**map;
	char	**map_copy;
	int		map_max_col;
	int		map_max_rows;
	int		num_lines;
	void	*mlx;
	void	*win;
	int		fd_check;
	int		fd_load;
	char	*flag_texture[5];
	char	p_looking_dir;
	t_ptex	textures;
	t_game	*game;
}			t_data;

// src/inits
// struct_inits.c
void		init_data(t_data *data);
void		init_textures(t_ptex *text);
int 		inits(t_data *data, t_game *game);
void    	init_struct(t_game *game, t_data *data);
int 		init_player(t_data *data, t_game *game);

// src/errors
// exit_errors.c
void		exit_error(t_data *data, char *msg, int f);
void    	put_error(char *msg);


// src/map
// parse_cub_identifiers.c
char		*trim_lead(char *str);
int			parse_floor_color(t_data *data, char *line);
int			parse_ceilling_color(t_data *data, char *line);
int			line_identifier_parse(t_data *data, char *line);
int			parse_identifiers(t_data *data, int fd);

// parse_cub_identifiers_utils.c
char *ft_strdup_n(char *line);
int			is_empty_line(char *line);
int			if_not_line_identifier_parse(t_data *data, char *line, char *orig,
				int fd);

// parse_map.c
int			is_identifier_line(char *line);
char		*skip_to_map_start(int fd);
void		map_count_lines(t_data *data, int fd);
int			create_parse_map(t_data *data);
void	parse_map(t_data *data, int fd);

// parse_map_utils.c
int	ft_strlen_n(char *str);
int	find_longest_line(t_data *data);
void    alloc_map_line(t_data *data, int i, int y);
int copy_map_line(t_data *data, char *line, int y, int bigest_len);

// parse_map_lines.c
int is_valid_map_tile(char c);
int verify_map_cluster(t_data *d);
int	verify_line_borders(t_data *d);
int verify_top_bottom_lines(t_data *d);
void    flood_fill(t_data *data, int row, int col);

// parse_map_player.c
void	locate_player(t_data *d);

// open_utils
// open.c
void		cub_open(t_data *data, int *fd, char *file);
int			open_file(t_data *data, char *path);

// src/verifications
// file_verifications.c
int			verify_file_extension(char *str);
int			verify_rgb(t_data *data);
int			verify_duplicate(t_ptex *tex);
void		verify_empty_file(t_data *data, char *file);
void		verify_onlyspaces_file(t_data *data);

// execute_verifications.c
void		execute_verifications(t_data *data);

// verify_allocs.c
void		if_allocated_free(t_data *data);
void		if_textures_alloc_free(t_data *data);

// load .cub
int			load_textures(t_data data, t_game *game);
int 		load_components(t_data *data, t_game *game);

// game
// game.c
int run_game(t_data *data, t_game *game);

// window.c 
int    open_window(t_game *game);
void cast_ray(t_game *game, int x);

// raycast.c
void    execute_dda(t_game *game);
void init_ray(t_game *game, int x);

#endif