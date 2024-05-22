# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldick <ldick@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 09:31:08 by ldick             #+#    #+#              #
#    Updated: 2024/05/22 12:32:08 by ldick            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
#directories
SRCS_DIR = srcs/
OBJS_DIR = srcs/objs/

#srcs and objects
SRCS = main.c
SRCS_PREFIXED = $(addprefix $(SRCS_DIR), $(SRCS))
OBJS = $(SRCS:.c=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

#compile instructions
COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

# $(OBJS_DIR)%.o : %.c push_swap.h
# 				@$(COMPILER)

ALL: $(NAME)

init:
		@git submodule init && git submodule update && cd main-libs && git submodule init && git submodule update

$(NAME): $(OBJS_PREFIXED)
		@cd main-libs && make --silent
		@$(COMPILER) $(CFLAGS) -o $(NAME) $(OBJS_PREFIXED) ./main-libs/libs.a

clean:
		@cd main-libs && make fclean
		@rm -rf $(OBJS_DIR)