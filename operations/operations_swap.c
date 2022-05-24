/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:58 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/24 17:40:49 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int ft_swap(t_list **stack)
{
	t_list *head;
	t_list *next;
	int index;
	int value;

	if (ft_length_lst(*stack) <= 1)
		return (0);
	head = *stack;
	next = head->next;
	index = head->index;
	value = head->value;
	head->index = next->index;
	head->value = next->value;
	next->value = value;
	next->index = index;
	return (1);
}

int ft_sa(t_list **stack_a)
{
	if (ft_swap(stack_a) == 0)
		return (0);
	ft_printf("sa\n");
	return (1);
}

int ft_sb(t_list **stack_b)
{
	if (ft_swap(stack_b) == 0)
		return (0);
	ft_printf("sb\n");
	return (1);
}

int ft_ss(t_list **stack_a, t_list **stack_b)
{
	if ((ft_length_lst(*stack_a) < 2) || (ft_length_lst(*stack_b) < 2))
		return (0);
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
	return (1);
}
