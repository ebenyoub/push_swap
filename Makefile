# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 21:16:19 by ebenyoub          #+#    #+#              #
#    Updated: 2021/10/08 11:35:25 by ebenyoub         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCDIR = ./src/
SRCNAMES = $(shell ls $(SRCDIR) | grep -E ".+\.c")
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
INC = ./inc/
INCLIB = ./inc/push_swap.h
BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))
RM = rm -rf

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra

DEBUG = -ggdb  -fsanitize=address 
all: $(BUILDDIR) $(NAME)

$(BUILDDIR):
	@if [ ! -e "$(BUILDDIR)" ]; then mkdir -p $(BUILDDIR); fi
	
$(BUILDDIR)%.o:$(SRCDIR)%.c $(INCLIB)
	$(CC) $(CFLAGS) -I$(INC) -o $@ -c $<

$(NAME): $(BUILDOBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(BUILDOBJS)

clean:
	$(RM) $(BUILDDIR) push_swap.dSYM .vscode
	

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
