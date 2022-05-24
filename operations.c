/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:58 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/24 01:31:40 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static int ft_push(t_list **a, t_list **b)
{
	t_list *elm;
	t_list *next;
	
	if (ft_length_lst(*b) < 1)
		return (0);
	elm = *b;
	next = elm->next;
	ft_lstadd_front(a, elm);
	*b = next;
	elm = 0;
	free(elm);
	return (1);
}

int ft_push_a(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_a,stack_b) == 0)
		return (0);
	ft_printf("pa\n");
	return (1);
}

int ft_push_b(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_b, stack_a) == 0)
		return (0);
	ft_printf("pb\n");
	return (1);
}

int ft_rotate(t_list **stack)
{
	t_list *temp;
	t_list	*last;

	if (ft_length_lst(*stack) <= 1)
		return (0);
	temp = *stack;
	last = ft_lstlast(*stack);
	*stack =temp->next;
	last->next = temp;
	temp->next = 0;
	return (1);
}