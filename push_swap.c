/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:33:32 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/09 09:30:00 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_exit(char *msg)
{
	ft_printf("%s \n", msg);
	exit(EXIT_FAILURE);
}


int	main(int argc, char **argv)
{
	 
	char *str;
	int *tab;

	if (argc > 2)
	{
		str = ft_get_arg(argc, argv);
		tab = get_array(str);
		int a = ft_nbr_number(str);
		int i = 0;
		while (i < a)
		{
			ft_printf("-->%d\n",tab[i]);
			i++;
		}
	}
	
	return (0);
}
