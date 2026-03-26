# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thiago <thiago@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 18:08:12 by thde-sou          #+#    #+#              #
#    Updated: 2026/03/26 19:24:44 by thiago           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../includes/colors.mk

CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c ft_isprint.c  ft_putchar_fd.c  ft_striteri.c  ft_strnstr.c \
ft_bzero.c    ft_itoa.c     ft_putendl_fd.c  ft_strjoin.c   ft_strrchr.c \
ft_calloc.c   ft_memchr.c   ft_putnbr_fd.c   ft_strlcat.c   ft_strtrim.c \
ft_isalnum.c  ft_memcmp.c   ft_putstr_fd.c   ft_strlcpy.c   ft_substr.c \
ft_isalpha.c  ft_memcpy.c   ft_split.c       ft_strlen.c    ft_tolower.c \
ft_isascii.c  ft_memmove.c  ft_strchr.c      ft_strmapi.c   ft_toupper.c \
ft_isdigit.c  ft_memset.c   ft_strdup.c      ft_strncmp.c       ft_itoa_base.c \
ft_strv_shift.c ft_split_whitespace.c ft_size_vetor.c ft_join3.c \
ft_isspace.c ft_free_vector.c  ft_free_failed_vector.c ft_vetor_dup.c \
ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_gnl.c \
ft_strcmp.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	@echo -e "📚$(FGCYAN)Libft Object Compilation Sucessfull📚"
	$(CC) $(FLAGS) -c $< -o $@
	@echo -e "$(RESET)"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
