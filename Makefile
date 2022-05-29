# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 09:53:49 by lahammam          #+#    #+#              #
#    Updated: 2022/05/29 15:49:21 by ahammam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRCS			= 	push_swap.c \
					utils/arg_valid.c \
					utils/initStack.c \
					utils/link_list.c \
					utils/is_sorted.c \
					operations/operations_push.c \
					operations/operations_rev_rotate.c \
					operations/operations_rotate.c \
					operations/operations_swap.c \
					sort_simple.c \
					radix_sort.c
					
SRCS_B			= 	checker.c \
					utils/arg_valid.c \
					utils/initStack.c \
					utils/link_list.c \
					utils/is_sorted.c \
					operations/operations_push.c \
					operations/operations_rev_rotate.c \
					operations/operations_rotate.c \
					operations/operations_swap.c \
					sort_simple.c \
					radix_sort.c
					
OBJES 		= ${SRCS:.c=.o}
OBJES_B 	= ${SRCS_B:.c=.o}

NAME 		= push_swap
NAME_B		= checker
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
				
$(NAME_B)	:   $(LIBFT) $(OBJES_B) push_swap.h
				$(CC) $(OBJES_B) ${LIBFT} -o $(NAME_B)
				$(MAKE) clean
				clear

$(LIBFT)	:
				$(MAKE) -C $(LIBFT_PATH)

bonus		: $(NAME_B)

clean		:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(RM) $(OBJES)

fclean		:	clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re			:	clean all

.PHONY		:	all clean fclean re ${LIBFT}