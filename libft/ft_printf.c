/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:34:42 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/08 15:06:40 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_string(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_print_string(num);
	free(num);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	list;

	len = 0;
	i = -1;
	va_start(list, str);
	while (str && str[++i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 's')
				len = len + ft_print_string(va_arg(list, char *));
			if (str[i + 1] == 'd')
				len = len + ft_printnbr(va_arg(list, int));
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
	}
	va_end(list);
	return (len);
}
