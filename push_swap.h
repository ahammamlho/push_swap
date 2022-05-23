/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:29:43 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/23 13:26:54 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct s_list
{
	int value;
	int index;
	struct s_list *next;
} t_list;

void ft_arg_is_valid(int argc, char **argv);
void print_exit(char *msg);
void initStack(t_list **stack_a, int argc, char **argv);
void ft_free(char **str);
int ft_is_sorted(t_list **stack);

// operations
void ft_swap(t_list **stack);
// link list
t_list *ft_lstnew(int value);
void ft_lstadd_back(t_list **stack, t_list *new);
t_list *ft_lstlast(t_list *head);
void ft_show_lst(t_list *head);
int ft_length_lst(t_list *head);

#endif