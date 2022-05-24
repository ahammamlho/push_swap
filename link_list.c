/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:17:55 by ahammam           #+#    #+#             */
/*   Updated: 2022/05/24 01:29:58 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstnew(int value)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (0);
    new->value = value;
    new->index = -1;
    new->next = 0;
    return (new);
}

t_list *ft_lstlast(t_list *head)
{
    t_list *temp;

    temp = head;
    if (!temp)
        return (0);
    while ( temp->next)
        temp = temp->next;
    return (temp);
}

void ft_lstadd_back(t_list **stack, t_list *new)
{
    t_list *n;
    
    if (*stack)
    {
        n = ft_lstlast(*stack);
        n->next = new;
    }
    else
    {
        *stack = new;
        (*stack)->next = NULL;
    }
}

void ft_lstadd_front(t_list **stack, t_list *new)
{
	new->next = *stack;
	*stack = new;
}

void ft_show_lst(t_list *head)
{
    t_list *temp;

    temp = head;
    if (!temp)
        return;
    while (temp)
    {
        ft_printf("-->index : %d ; value : %d\n", temp->index, temp->value);
        temp = temp->next;
    }
}

int ft_length_lst(t_list *head)
{
    t_list *temp;
    int len;

    temp = head;
    len = 1;
    if (!temp)
        return (0);
    while (temp->next)
    {
        len++;
        temp = temp->next;
    }
    return (len);
}