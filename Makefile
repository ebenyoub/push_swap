# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 21:16:19 by ebenyoub          #+#    #+#              #
#    Updated: 2021/09/13 14:33:45 by ebenyoub         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCDIR = ./src/
SRCNAMES = $(shell ls $(SRCDIR) | grep -E ".+\.c")
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
INC = ./inc/
BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))

LIBDIR = ./libft/
LIBFT = ./libft/libft.a
LIBINC = ./libft/libft.h

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra

DEBUG = -ggdb  -fsanitize=address 
all: $(BUILDDIR) $(NAME)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(BUILDDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -I$(LIBINC) -I$(INC) -o $@ -c $<

$(NAME): $(BUILDOBJS)
	$(CC) $(CFLAGS) $(DEBUG) -o $(NAME) $(BUILDOBJS)

$(LIBFT):
	make -C $(LIBDIR)

clean:
	rm -rf $(BUILDDIR) push_swap.dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
