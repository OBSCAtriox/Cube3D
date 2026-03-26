include includes/colors.mk

CC = cc
FLAGS = -Wall -Werror -Wextra -Iincludes

NAME = cub3d

GNL_DIR = gnl
GNL = $(GNL_DIR)/gnl.a

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBS = -lm

SRC = main.c src/errors/exit_error.c src/verifications/execute_verifications.c \
src/verifications/file_verifications.c src/verifications/verify_allocs.c \
src/map/parse_cub_identifiers.c src/map/parse_cub_identifiers_utils.c \
src/inits/struct_inits.c src/verifications/verify_identifiers.c \
src/map/parse_map.c src/open_utils/open.c \

OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(LIBFT) $(GNL) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(GNL) $(LIBS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus
	@echo -e "📚$(FGCYAN)Libft Compilation Sucessfull$(RESET)📚"

$(GNL):
	$(MAKE) -C $(GNL_DIR)
	@echo -e "📄$(FGCYAN)GNL Compil Sucessfull📄$(RESET)"

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
	$(MAKE) -C $(GNL_DIR) clean
	@echo -e "$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo -e "$(FGRED)"
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(GNL_DIR) fclean
	@echo -e "$(RESET)"
	rm -rf $(NAME).zip


zip: fclean
	rm -rf $(NAME).zip
	zip -r $(NAME).zip .

re: fclean all

.PHONY: all clean fclean re
