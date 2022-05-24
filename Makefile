# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 09:53:49 by lahammam          #+#    #+#              #
#    Updated: 2022/05/24 00:27:17 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRCS			= 	push_swap.c arg_valid.c initStack.c link_list.c is_sorted.c operations.c
OBJES 		= ${SRCS:.c=.o}

NAME 		= push_swap
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -rf

%.o			:	%.c
				$(CC) ${CFLAGS} -c $< -o $@
	

all			:	$(NAME)

$(NAME)		:	$(LIBFT) $(OBJES) push_swap.h
				$(CC) $(OBJES) ${LIBFT} -o $(NAME)
				$(MAKE) clean
				clear

$(LIBFT)	:
				$(MAKE) -C $(LIBFT_PATH)

clean		:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(RM) $(OBJES)

fclean		:	clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re			:	clean all

.PHONY		:	all clean fclean re ${LIBFT}