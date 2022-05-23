/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:04:29 by ahammam           #+#    #+#             */
/*   Updated: 2022/05/23 13:09:22 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_sorted(t_list **stack)
{
    t_list *temp;

    temp = *stack;
    while (temp && temp->next)
    {
        if (temp->value > temp->next->value)
            return (0);
        temp = temp->next;
    }
    return (1);
}