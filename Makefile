include includes/colors.mk

CC = cc
FLAGS = -Wall -Werror -Wextra -Iincludes

NAME = cub3d

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBS = -lm

SRC = main.c

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(LIBS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus
	@echo -e "📚$(FGCYAN)Libft Compilation Sucessfull$(RESET)📚"

%.o: %.c
	@echo -e "✨$(FGYELLOW)Object Compilation Sucessfull✨"
	$(CC) $(FLAGS) -c $< -o $@
	@echo -e "$(RESET)"

clean:
	rm -f $(OBJ)
	@echo -e "$(FGRED)"
	$(MAKE) -C $(LIBFT_DIR) clean
	@echo -e "$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo -e "$(FGRED)"
	$(MAKE) -C $(LIBFT_DIR) fclean
	@echo -e "$(RESET)"

re: fclean all

.PHONY: all clean fclean re