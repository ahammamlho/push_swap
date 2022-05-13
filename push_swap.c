/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:19:09 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/13 22:20:24 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int a_is_duplicated(int *tab, int len)
{
	int i;
	int j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] = tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int a_is_sorted(int *tab, int len)
{
	int i;
	int j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] >= tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int *sort_array(int *tab, int len)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void print_exit(char *msg)
{
	ft_printf("%s \n", msg);
	exit(EXIT_FAILURE);
}


int	main(int argc, char **argv)
{
	 
	char *str;
	int *a;
	int len;

	if (argc > 2)
	{
		str = ft_get_arg(argc, argv);
		a = get_array(str);
		len = ft_nbr_number(str);
		a = sort_array(a, len);
		int i = 0;
		while (i < len)
		{
			ft_printf("--->%d\n", a[i]);
			i++;
		}
		
		
	}
	
	return (0);
}
