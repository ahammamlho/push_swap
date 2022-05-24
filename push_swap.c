/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:19:09 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/24 01:32:52 by lahammam         ###   ########.fr       */
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
	t_list **stack_b;
	t_list *elm;
	t_list *elm2;

	if (argc < 2)
		return (0);
	ft_arg_is_valid(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = 0;
	*stack_b = 0;
	elm = ft_lstnew(5);
	elm2 = ft_lstnew(4);
	ft_lstadd_front(stack_b, elm);
	ft_lstadd_front(stack_b, elm2);
	initStack(stack_a, argc, argv);
	ft_show_lst(*stack_a);
	ft_rotate(stack_a);
	ft_printf("------------\n");
	ft_show_lst(*stack_a);

	return (0);
}
