include includes/colors.mk

CC = cc
FLAGS = -Wall -Werror -Wextra -Iincludes

NAME = cub3d

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBS = -lm

SRC = main.c src/errors/exit_error.c src/verifications/execute_verifications.c \
src/verifications/file_verifications.c src/verifications/verify_allocs.c \
src/map/parse_cub_identifiers.c src/map/parse_cub_identifiers_utils.c \
src/inits/struct_inits.c src/verifications/verify_identifiers.c \
src/map/parse_map.c src/open_utils/open.c src/map/parse_map_utils.c \
src/map/parse_map_lines.c src/map/parse_map_player.c src/inits/inits_game.c \

OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(LIBS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all
	@echo -e "📚$(FGCYAN)Libft Compilation Sucessfull$(RESET)📚"

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@echo -e "✨$(FGYELLOW)Object Compilation Sucessfull✨"
	$(CC) $(FLAGS) -c $< -o $@
	@echo -e "$(RESET)"

mlx:
	git clone https://github.com/42Paris/minilibx-linux.git

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
