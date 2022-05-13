/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arguments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:19:48 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/13 22:19:50 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static char	*ft_add_char(char *src, char c)
{
	int		lent_src;
	char	*result;
	int		i;

	result = 0;
	lent_src = ft_strlen(src);
	result = (char *) malloc((lent_src + 2 )* sizeof(char));
	i = 0;
	while (i < lent_src)
	{
		result[i] = src[i];
		i++;
	}
	if (src)
		free(src);
	result[i] = c;
	result[i + 1] = '\0';
	return (result);
}

static int ft_is_number(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] && str[i] && str[i] <= '9' && str[i] >= '0')
		i++;
	if (str[i])
		return (0);
	return (1);
}

char *ft_get_arg(int argc, char **argv)
{
	int i;
	int j;
	char *str;
	char *nbr;

	i = 1;
	str = ft_strdup("");

	while (i < argc)
	{
		j = 0;
		nbr = ft_strdup("");
		while (argv[i][j])
		{
			str = ft_add_char(str, argv[i][j]);
			nbr = ft_add_char(nbr, argv[i][j]);
			j++;
		}
		if (ft_is_number(nbr) == 0)
		{
			free(nbr);
			free(str);
			print_exit("Error");
		}
		str = ft_add_char(str, ',');
		i++;
	}
	return (str);
}