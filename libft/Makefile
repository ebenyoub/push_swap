# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 15:23:25 by ebenyoub          #+#    #+#              #
#    Updated: 2021/08/25 20:13:45 by ebenyoub         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME		=	libft.a
SRCDIR = ./
SRCNAMES = $(shell ls $(SRCDIR) | grep -E ".+\.c")
SRCS = $(addprefix $(SRCDIR), $(SRCNAMES))
CFLAGS		=	-Wall -Wextra -Werror
OBJS		=	$(SRCS:.c=.o)
HEAD		=	libft.h
CC			=	gcc
RM			=	rm -f


%.o:%.c		$(HEAD)
			$(CC) $(CFLAGS) -IINCL -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(HEAD)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJS) $(HEAD)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

.PHONY: all clean fclean re bonus