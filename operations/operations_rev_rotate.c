/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rev_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:39:20 by ahammam           #+#    #+#             */
/*   Updated: 2022/05/24 17:44:41 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int ft_reverse_rotate(t_list **stack)
{
    t_list *temp;
    t_list *last;

    if (ft_length_lst(*stack) <= 1)
        return (0);
    temp = *stack;
    last = ft_lstlast(*stack);
    *stack = last;
    last->next = temp;
    while (temp->next)
    {
        if (temp->next == last)
            temp->next = 0;
        else
            temp = temp->next;
    }

    return (1);
}

int ft_rra(t_list **stack_a)
{
    if (ft_reverse_rotate(stack_a) == 0)
        return (0);
    ft_printf("rra\n");
    return (1);
}

int ft_rrb(t_list **stack_b)
{
    if (ft_reverse_rotate(stack_b) == 0)
        return (0);
    ft_printf("rrb\n");
    return (1);
}

int ft_rrr(t_list **stack_a, t_list **stack_b)
{
    if (ft_length_lst(*stack_a) <= 1 || ft_length_lst(*stack_b) <= 1)
        return (0);
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    ft_printf("rrr\n");
    return (1);
}