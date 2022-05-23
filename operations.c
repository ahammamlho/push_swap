/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:58 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/23 14:00:54 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_list **stack)
{
	t_list *temp;
	t_list *next;
	
	if (ft_length_lst(*stack) <= 1)
		return ;
	temp = *stack;
	next = (*stack)->next;
	temp->value = next->value;
	temp->index = next->index;
	temp->next = next->next;
	(temp->next)->value = temp->value;
	(temp->next)->index = temp->index;
	(temp->next)->next = temp->next;
	ft_printf("sa\n");
}