# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 14:42:29 by lahammam          #+#    #+#              #
#    Updated: 2022/05/29 18:09:43 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC =	ft_printf.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strjoin.c \
		ft_split.c \
		ft_substr.c \
		ft_itoa.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_strcmp.c \
		get_next_line.c

OBJECTS = $(SRC:.c=.o)

%.o: %.c
	$(CC) ${CFLAGS} -c $< -o $@
	
all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	ar -rcs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
