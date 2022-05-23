/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:19:09 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/23 13:56:08 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_exit(char *msg)
{
	ft_printf("%s \n", msg);
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	t_list **stack_a;
	// t_list **stack_b;

	if (argc < 2)
		return (0);
	ft_arg_is_valid(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = 0;
	// // stack_b = (t_list **)malloc(sizeof(t_list));
	initStack(stack_a, argc, argv);
	ft_swap(stack_a);
	// ft_show_lst(*stack_a);
	
	
	return (0);
}
