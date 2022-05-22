# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 14:42:29 by lahammam          #+#    #+#              #
#    Updated: 2022/05/22 13:46:10 by ahammam          ###   ########.fr        #
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
