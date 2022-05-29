/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:54:49 by ahammam           #+#    #+#             */
/*   Updated: 2022/05/29 01:11:51 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_max_bits(t_list **stack_a)
{
    int max;
    int max_bits;
    t_list *head;

    head = *stack_a;
    max = head->index;
    max_bits = 0;
    while (head)
    {
        if (max < head->index)
            max = head->index;
        head = head->next;
    }
    while (max >> max_bits)
        max_bits++;
    return (max_bits);
}
void ft_radix_sort(t_list **stack_a, t_list **stack_b)
{
    int i;
    int j;
    int max_bits;
    int lenght;
    t_list *head_a;

    max_bits = get_max_bits(stack_a);
    i = 0;
    lenght = ft_length_lst(*stack_a);
    while (i < max_bits)
    {
        j = 0;
        while (j < lenght)
        {
            head_a = *stack_a;
            if (((head_a->index >> i) & 1) == 1) // if (((head_a->index >> i) & 1) == 1)
                ft_ra(stack_a);
            else
                ft_push_b(stack_a, stack_b);
            j++;
        }
        while (ft_length_lst(*stack_b))
            ft_push_a(stack_a, stack_b);
        i++;
    }
}