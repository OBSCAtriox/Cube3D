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


#endif