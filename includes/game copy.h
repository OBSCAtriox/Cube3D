#ifndef GAME_H
#define GAME_H

# define WIDTH 1200
# define HEIGHT 800
# define TEXTURE_WIDTH 48

typedef struct s_img
{
	void	*img_prt;	//ponteiro da imagem criada pela MLX
	char	*addr;		//endereço do ponteiro pixel da imagem
	int		bpp;		//bits por pixel (profundidade de cor)
	int		line_len;	//número de bytes por linha da imagem
	int		endian;		//ordem dos bytes (little/big endian)
}	t_img;

typedef struct s_texture
{
	t_img	img;		//imagem da textura carregada
	int		width;		//largura da textura em pixels
	int		height;		//altura da textura em pixels
}	t_texture;

typedef struct s_player
{
	double	pos_x;		//posição do jogador no mapa (eixo x)
	double	pos_y;		//posição do jogador no mapa (eixo y)
	double	dir_x;		//direção atual que o jogador está olhando (x)
	double	dir_y;		//direção atual que o jogador está olhando (y)
	double	plane_x;	//plano de câmera (eixo x) - define largura do campo de visão
	double	plane_y;	//plano de câmera (eixo y) . usado para gerar os raios
}	t_player;

typedef	struct s_map
{
	char	**grid;		//matriz do mapa ('1' parede, '0' espaço, etc.)
	int		width;		//largura do mapa (número de colunas)
	int		height;		//altura do mapa (número de linhas)
}	t_map;

typedef struct s_keys
{
	int		w;			//tecla pressionada (andar para frente)
	int		a;			//tecla pressionada (andar para esquerda)
	int		s;			//tecla pressionada (andar para trás)
	int		d;			//tecla pressionada (andar para direita)

	int		left;		//seta pressionada (rotacionar)
	int		right;		//seta pressionada (rotacionar)
}	t_keys;

typedef	struct s_color
{
	int		r;			//componente vermelho (0-255)
	int		g;			//componente verde	(0-255)
	int		b;			//componente azul	(0-255)

	int		value;		//valor da cor convertido para inteiro (0xRRGGBB)
}	t_color;

typedef	struct s_tex
{
	t_texture	north;	//textura da parede voltada para o norte
	t_texture	south;	//textura da parede voltada para o sul
	t_texture	east;	//textura da parede voltada para o leste
	t_texture	west;	//textura da parede voltada para o oeste
}	t_tex;

typedef struct s_ray
{
	double		camera_x;	//posição da câmera no plano da câmera (-1 a 1)

	double		ray_dir_x;	//direção do raio no eixo X
	double		ray_dir_y;	//direção do raio no eixo Y

	int			map_x;		//posição atual do raio no grid do mapa (X)
	int			map_y;		//posição atual do raio no grid do mapa (Y)

	double		side_dist_x;	//distância até a próxima linha vertical do grid
	double		side_dist_y;	//distância até a próxima linha horizontal do grid

	double		delta_dist_x;	//distância que o raio percorre entre linhas verticais
	double		delta_dist_y;	//distância que o raio percorre entre linhas horizontais

	double		perp_wall_dist; //distância perpendicular da câmera até a parede

	int			step_x;			//direção do passo no eixo X (-1 esquerda, 1 direita)
	int			step_y;			//direção do passo no eixo Y (-1 cima, 1 baixo)

	int			hit;			//indica se o raio encontrou uma parede
	int			side;			//lado atingido (0 = vertical, 1 = horizontal)

	
};


#endif