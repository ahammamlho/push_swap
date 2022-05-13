


#include "push_swap.h"


int ft_nbr_number(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while(str[i])
	{
		if (str[i] == ',')
			res++;
		i++;
	}
	return (res);
}
 

int *get_array(char *str)
{
	int *result;
	int i;
	int j;

	i = 0;
	j = 0;
	result =  malloc(ft_nbr_number(str) * sizeof(int));
	result[j] = ft_atoi(str + i);
	j++;
	while (str[i])
	{
		while (str[i] && str[i] != ',')
			i++;
		i++;
		if (str[i])
		{
			result[j] = ft_atoi(str + i);
			j++;
		}
		while (str[i] && str[i] != ',')
			i++;
	}
	return (result);
}