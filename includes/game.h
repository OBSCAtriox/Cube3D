#ifndef GAME_H
#define GAME_H

# define WIDTH 1920
# define HEIGHT 960
# define TEXTURE_WIDTH 500

# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_UP 65362
# define KEY_DOWN 65364
# define KEY_LEFT 65361
# define KEY_RIGHT 65363
# define ESC 65307

# define SPEED 0.1
# define ROT_SPEED 0.05
# define ROT_SPEED_UP_DOWN ROT_SPEED * 400

typedef struct s_img
{
	void	*img_ptr;   // ponteiro da imagem criada pela MLX
	char	*addr;      // endereço do primeiro pixel da imagem
	int		bpp;        // bits por pixel (profundidade de cor)
	int		line_len;   // número de bytes por linha da imagem
	int		endian;     // ordem dos bytes (little/big endian)
}	t_img;

typedef struct s_texture
{
	t_img	img;        // imagem da textura carregada
	int		width;      // largura da textura em pixels
	int		height;     // altura da textura em pixels
}	t_texture;

typedef struct s_player
{
	double	pos_x;      // posição do jogador no mapa (eixo X)
	double	pos_y;      // posição do jogador no mapa (eixo Y)
	double	dir_x;      // direção atual que o jogador está olhando (X)
	double	dir_y;      // direção atual que o jogador está olhando (Y)
	double	plane_x;    // plano da câmera (eixo X) — define largura do campo de visão
	double	plane_y;    // plano da câmera (eixo Y) — usado para gerar os raios
	double	pitch;
}	t_player;

typedef struct s_map
{
	char	**grid;     // matriz do mapa ('1' parede, '0' espaço, etc.)
	int		width;      // largura do mapa (número de colunas)
	int		height;     // altura do mapa (número de linhas)
}	t_map;

typedef struct s_keys
{
	int	w;          // tecla W pressionada (andar para frente)
	int	a;          // tecla A pressionada (andar para esquerda)
	int	s;          // tecla S pressionada (andar para trás)
	int	d;          // tecla D pressionada (andar para direita)

	int	up;
	int down;
	int	left;       // seta esquerda pressionada (rotacionar esquerda)
	int	right;      // seta direita pressionada (rotacionar direita)
}	t_keys;

typedef struct s_color
{
	int	r;          // componente vermelho (0–255)
	int	g;          // componente verde (0–255)
	int	b;          // componente azul (0–255)

	int	value;      // valor da cor convertido para inteiro (0xRRGGBB)
}	t_color;

typedef struct s_tex
{
	t_texture	north;  // textura da parede voltada para o norte
	t_texture	south;  // textura da parede voltada para o sul
	t_texture	east;   // textura da parede voltada para o leste
	t_texture	west;   // textura da parede voltada para o oeste
}	t_tex;

typedef struct s_ray
{
	double	camera_x;        // posição da coluna no plano da câmera (-1 a 1)

	double	ray_dir_x;      // direção do raio no eixo X
	double	ray_dir_y;      // direção do raio no eixo Y

	int		map_x;          // posição atual do raio no grid do mapa (X)
	int		map_y;          // posição atual do raio no grid do mapa (Y)

	double	side_dist_x;    // distância até a próxima linha vertical do grid
	double	side_dist_y;    // distância até a próxima linha horizontal do grid

	double	delta_dist_x;   // distância que o raio percorre entre linhas verticais
	double	delta_dist_y;   // distância que o raio percorre entre linhas horizontais

	double	perp_wall_dist; // distância perpendicular da câmera até a parede

	int		step_x;         // direção do passo no eixo X (-1 esquerda, 1 direita)
	int		step_y;         // direção do passo no eixo Y (-1 cima, 1 baixo)

	int		hit;            // indica se o raio encontrou uma parede
	int		side;           // lado atingido (0 = vertical, 1 = horizontal)

	int		line_height;    // altura da parede projetada na tela
	int		draw_start;     // pixel inicial da parede na coluna
	int		draw_end;       // pixel final da parede na coluna

	double	wall_x;        // posição exata onde o raio atingiu a parede
	int		tex_x;         // coordenada X da textura a ser usada

	double	step;          // quanto avançar na textura por pixel desenhado
	double	tex_pos;       // posição inicial na textura
}	t_ray;

typedef struct s_game
{
	void		*mlx;           // conexão com a MiniLibX
	void		*win;           // janela criada pela MLX

	t_img		screen;         // framebuffer onde a cena é desenhada

	t_map		map;            // mapa do jogo
	t_player	player;         // estado do jogador

	t_tex		tex;            // conjunto de texturas das paredes
	t_keys		keys;           // estado das teclas pressionadas

	t_color		floor;          // cor do chão
	t_color		ceiling;        // cor do teto

	t_ray		ray;

	int			screen_width;   // largura da janela
	int			screen_height;  // altura da janela
}	t_game;

#endif