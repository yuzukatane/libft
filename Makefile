# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 18:43:53 by kyuzu             #+#    #+#              #
#    Updated: 2022/04/05 18:44:26 by kyuzu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I includes
CC = gcc -c $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	ar -r $(NAME) $(OBJS)

$(OBJS):

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
