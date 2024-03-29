/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:19:09 by lahammam          #+#    #+#             */
/*   Updated: 2022/06/04 14:46:29 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_length_lst(*stack_a) <= 5)
		ft_sort_simple(stack_a, stack_b);
	else
		ft_radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (0);
	ft_arg_is_valid(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = 0;
	*stack_b = 0;
	ft_init_stack(stack_a, argc, argv);
	
	if (ft_is_sorted(stack_a) == 1)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		exit(0);
	}
	ft_sort(stack_a, stack_b);
	return (0);
}
