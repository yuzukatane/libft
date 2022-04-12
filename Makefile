# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 19:08:02 by kyuzu             #+#    #+#              #
#    Updated: 2022/04/12 20:25:00 by kyuzu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isascii.c ft_isalpha.c ft_bzero.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c\
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
	ft_substr.c ft_strjoin.c 
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc -c $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
