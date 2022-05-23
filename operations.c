/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:58 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/24 00:09:14 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_list **stack)
{
	t_list *head;
	t_list *next;
	int index;
	int value;

	if (ft_length_lst(*stack) <= 1)
		return;
	head = *stack;
	next = head->next;
	index = head->index;
	value = head->value;
	head->index = next->index;
	head->value = next->value;
	next->value = value;
	next->index = index;
	ft_printf("sa\n");
}