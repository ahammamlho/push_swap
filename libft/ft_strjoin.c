/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:41:43 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/08 14:36:13 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_bzero(void *ptr, size_t n)
{
	unsigned int	i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)ptr;
	while (i < n)
	{
		*(temp + i) = 0;
		i++;
	}
}

static void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (0);
	ft_bzero(result, count * size);
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	char	*t_s1;
	char	*t_s2;

	i = 0;
	j = 0;
	t_s1 = (char *)s1;
	t_s2 = (char *)s2;
	result = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!result)
		return (result);
	while (t_s1 && t_s1[i] != '\0')
		result[j++] = t_s1[i++];
	i = 0;
	while (t_s2 && t_s2[i] != '\0')
		result[j++] = t_s2[i++];
	return (result);
}
