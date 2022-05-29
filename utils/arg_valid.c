/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:47:13 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/29 18:04:02 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isnumber(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[0] == '-' || nbr[0] == '+')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_is_duplicated(int nbr, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == nbr)
			return (1);
		i++;
	}
	return (0);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_arg_is_valid(int argc, char **argv)
{
	int		i;
	long	temp;
	char	**str;

	i = 0;
	if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		str = argv;
	}
	while (str[i])
	{
		temp = ft_atoi(str[i]);
		if (!ft_isnumber(str[i]))
			print_exit("Error");
		if (temp < -2147483648 || temp > 2147483647)
			print_exit("Error");
		if (ft_is_duplicated(temp, str, i))
			print_exit("Error");
		i++;
	}
	if (argc == 2)
		ft_free(str);
}
