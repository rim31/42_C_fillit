# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oseng <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/18 11:49:03 by oseng             #+#    #+#              #
#    Updated: 2016/01/18 11:49:14 by oseng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_algo.c ft_check.c ft_check_hpn.c ft_create_tab.c ft_draw_tetri.c \
	 ft_draw_tetri_l.c ft_draw_tetri_l2.c ft_draw_tetri_other.c \
	 ft_draw_tetri_s.c ft_draw_tetri_t.c ft_empty_sq.c ft_erase.c ft_error.c \
	 ft_init_tab.c ft_is_tetri_l.c ft_is_tetri_l2.c ft_is_tetri_other.c \
	 ft_is_tetri_s.c ft_is_tetri_t.c ft_resize.c ft_resize_one.c \
	 ft_save_file.c ft_size.c ft_strlen_int.c main.c \

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		@$(CC) $(LIB) $(OBJ) -o $@

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
