/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:23:53 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/28 18:36:19 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_max(t_list **stack)
{
	t_list *head;
	int max;

	head = *stack;
	max = head->index;
	while (head)
	{
		if (max < head->index)
			max = head->index;
		head = head->next;
	}
	return (max);
}

static void ft_sort_three(t_list **stack_a, int min)
{
	t_list *head_a;
	int max;

	max = get_max(stack_a);
	head_a = *stack_a;
	if (ft_is_sorted(stack_a))
		return;
	if (head_a->index == min)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (head_a->index == max)
	{
		if (head_a->next->index == min)
			ft_ra(stack_a);
		else
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	}
	else if (head_a->index != min && head_a->index != max)
	{
		if (head_a->next->index == max)
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
}

static int ft_index_min(t_list **stack_a, int min)
{
	int index_zero;
	t_list *head;

	index_zero = 0;
	head = *stack_a;
	while (head)
	{
		if (head->index == min)
			return (index_zero);
		index_zero++;
		head = head->next;
	}
	return (index_zero);
}

static void ft_sort_for(t_list **stack_a, t_list **stack_b, int min)
{
	int index_zero;

	index_zero = ft_index_min(stack_a, min);
	if (index_zero == 1)
		ft_sa(stack_a);
	else if (index_zero == 2 || index_zero == 3)
	{
		ft_rra(stack_a);
		if (index_zero == 2)
			ft_rra(stack_a);
	}
	if (ft_is_sorted(stack_a))
		return;
	ft_push_b(stack_a, stack_b);
	ft_sort_three(stack_a, 1 + min);
	ft_push_a(stack_a, stack_b);
}

static void ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int index_zero;

	index_zero = ft_index_min(stack_a, 0);
	if (index_zero == 1)
		ft_sa(stack_a);
	else if (index_zero == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (index_zero == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (index_zero == 4)
		ft_rra(stack_a);
	if (ft_is_sorted(stack_a))
		return;
	ft_push_b(stack_a, stack_b);
	ft_sort_for(stack_a, stack_b, 1);
	ft_push_a(stack_a, stack_b);
}
void ft_sort_simple(t_list **stack_a, t_list **stack_b)
{
	int length;

	length = ft_length_lst(*stack_a);
	if (length == 2)
		ft_sa(stack_a);
	else if (length == 3)
		ft_sort_three(stack_a, 0);
	else if (length == 4)
		ft_sort_for(stack_a, stack_b, 0);
	else if (length == 5)
		ft_sort_five(stack_a, stack_b);
	length = ft_length_lst(*stack_b);
}