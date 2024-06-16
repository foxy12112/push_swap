# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldick <ldick@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 09:31:08 by ldick             #+#    #+#              #
#    Updated: 2024/06/16 13:11:45 by ldick            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS_DIR = srcs/

SRCS =	srcs/argument_utils.c	\
		srcs/parse_utils.c		\
		srcs/main.c				\
		srcs/weirdprint.c		\
		srcs/sort_utils.c		\
		srcs/utils.c			\
		srcs/sort.c				\
		srcs/operations/rotate.c\
		srcs/operations/push.c	\
		srcs/operations/swap.c	\
		srcs/operations/revrot.c\

COMPILER = cc

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

all: $(NAME)

init:
	@git submodule init && git submodule update && cd main-libs && git submodule init && git submodule update

$(NAME): $(OBJS)
	@cd main-libs && make --silent
	@$(COMPILER) $(CFLAGS) -o $(NAME) $(OBJS) ./main-libs/libs.a
clean:
	@cd main-libs && make fclean
	@rm -f $(OBJS)

fclean: clean
	@rm -rf MLX42
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re