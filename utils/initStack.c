/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initStack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:04:50 by ahammam           #+#    #+#             */
/*   Updated: 2022/06/04 15:07:42 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_list *head)
{
	t_list	*temp;
	int		min;

	temp = head;
	if (!temp)
		return (-1);
	min = 2147483647;
	while (temp)
	{
		if (temp->index == -1 && min > temp->value)
			min = temp->value;
		temp = temp->next;
	}
	return (min);
}

static void	ft_index(t_list **stack_a)
{
	int		min;
	t_list	*temp;
	int		index;

	min = get_min(*stack_a);
	temp = *stack_a;
	index = 0;
	while (temp)
	{
		if (temp->index == -1 && temp->value == min)
		{
			temp->index = index;
			index++;
			temp = *stack_a;
			min = get_min(*stack_a);
		}
		else
			temp = temp->next;
	}
	
}

void	ft_init_stack(t_list **stack_a, int argc, char **argv)
{
	int		i;
	t_list	*new;
	char	**str;

	i = 0;
	str = 0;
	if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		str = argv;
	}
	while (str[i])
	{
		new = ft_lstnew(ft_atoi(str[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
	if (argc == 2)
		ft_free(str);
	ft_index(stack_a);
}
