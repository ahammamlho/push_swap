/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:23:53 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/25 12:51:39 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_sort_three(t_list **stack_a, t_list **stack_b)
{
	t_list *head_a;

	head_a = *stack_a;
	if (ft_is_sorted(&(head_a->next)))
	{
		ft_ra(stack_a);
		ft_sa(stack_b);
	}
	
	
}

void ft_sort_simple(t_list **stack_a, t_list **stack_b)
{
	int length;

	length = ft_length_lst(*stack_a);
	if (length == 2)
		ft_sa(stack_a);
	else if (length == 3)
		ft_sort_three(stack_a, stack_b);

}