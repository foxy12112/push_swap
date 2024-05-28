# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldick <ldick@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 09:31:08 by ldick             #+#    #+#              #
#    Updated: 2024/05/28 10:09:14 by ldick            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS_DIR = srcs/

SRCS =	srcs/main.c			\
		srcs/arguments.c	\

COMPILER = cc

OBJS = $(SRCS:.c=.o)

# CFLAGS = -Wall -Wextra -Werror

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