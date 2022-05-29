/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile_sort_simple.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:48:44 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/29 21:52:19 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index_min(t_list **stack_a, int min)
{
	int		index_zero;
	t_list	*head;

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
