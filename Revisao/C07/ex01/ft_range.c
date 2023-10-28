/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:13:32 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/13 14:13:31 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_create_arr(int min, int max, int *range_arr)
{
	int	i;
	int	element;

	i = 0;
	element = min;
	while (element < max)
	{
		range_arr[i] = element;
		i++;
		element++;
	}
	return (range_arr);
}

int	*ft_range(int min, int max)
{
	int	*range_arr;

	if (min >= max)
		return (NULL);
	else
	{
		range_arr = (int *)malloc((max - min) * sizeof(int));
		if (range_arr == NULL)
			return (NULL);
		else
			ft_create_arr(min, max, range_arr);
	}
	return (range_arr);
}
/*
int	main(void)
{
	int	minimun;
	int	maximun;
	int	*arr_range;
	int	count;

	minimun = 7;
	maximun = 21;
	count = 0;
	arr_range = ft_range(minimun, maximun);
	while (count < maximun - minimun)
	{
		printf("%d\n", arr_range[count]);
		count++;
	}
	return (0);
}*/
