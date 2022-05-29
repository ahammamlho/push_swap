/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:29:43 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/29 21:49:22 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}		t_list;

void	ft_arg_is_valid(int argc, char **argv);
void	print_exit(char *msg);
void	ft_init_stack(t_list **stack_a, int argc, char **argv);
void	ft_free(char **str);
int		ft_is_sorted(t_list **stack);
void	free_stack(t_list **stack);

void	ft_sort_simple(t_list **stack_a, t_list **stack_b);
int		ft_index_min(t_list **stack_a, int min);
void	ft_radix_sort(t_list **stack_a, t_list **stack_b);

int		ft_sa(t_list **stack_a, int pr);
int		ft_sb(t_list **stack_b, int pr);
int		ft_ss(t_list **stack_a, t_list **stack_b, int pr);
int		ft_push_a(t_list **stack_a, t_list **stack_b, int pr);
int		ft_push_b(t_list **stack_a, t_list **stack_b, int pr);
int		ft_ra(t_list **stack_a, int pr);
int		ft_rb(t_list **stack_b, int pr);
int		ft_rr(t_list **stack_a, t_list **stack_b, int pr);
int		ft_rra(t_list **stack_a, int pr);
int		ft_rrb(t_list **stack_b, int pr);
int		ft_rrr(t_list **stack_a, t_list **stack_b, int pr);

t_list	*ft_lstnew(int value);
void	ft_lstadd_back(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *head);
void	ft_show_lst(t_list *head);
int		ft_length_lst(t_list *head);
void	ft_lstadd_front(t_list **stack, t_list *new);

#endif