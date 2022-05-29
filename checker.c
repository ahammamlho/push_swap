/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:05:06 by ahammam           #+#    #+#             */
/*   Updated: 2022/05/29 17:54:29 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_exit(char *msg)
{
	ft_printf("%s \n", msg);
	exit(0);
}

static int	ft_do_commands(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(line, "sa\n")))
		ft_sa(stack_a, 0);
	else if (!(ft_strcmp(line, "ra\n")))
		ft_ra(stack_a, 0);
	else if (!(ft_strcmp(line, "rra\n")))
		ft_rra(stack_a, 0);
	else if (!(ft_strcmp(line, "pa\n")))
		ft_push_a(stack_a, stack_b, 0);
	else if (!(ft_strcmp(line, "pb\n")))
		ft_push_b(stack_a, stack_b, 0);
	else
		return (0);
	return (1);
}

static void	print_checker_res(t_list **stack_a, t_list **stack_b)
{
	if (ft_is_sorted(stack_a) && ft_length_lst(*stack_b) == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (*stack_a)
		free_stack(stack_a);
	if (*stack_b)
		free_stack(stack_b);
}

int	main(int argc, char **argv)
{
	t_list		**stack_a;
	t_list		**stack_b;
	char		*line;

	if (argc < 2)
		return (0);
	ft_arg_is_valid(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_init_stack(stack_a, argc, argv);
	line = get_next_line(0);
	while (line)
	{
		if (!ft_do_commands(line, stack_a, stack_b))
		{
			print_exit("Error");
			return (0);
		}
		free(line);
		line = get_next_line(0);
	}
	print_checker_res(stack_a, stack_b);
	return (1);
}
