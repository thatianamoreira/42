/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:12:10 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/13 14:37:21 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_create_arr(int min, int max, int *range)
{
	int	i;
	int	element;

	i = 0;
	element = min;
	while (element < max)
	{
		range[i] = element;
		i++;
		element++;
	}
	return (*range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = malloc((max - min) * sizeof(int));
		if (*range == NULL)
			return (-1);
		else
			ft_create_arr(min, max, *range);
		return (max - min);
	}
}
/*
int	main(void)
{
	int	minimun;
	int	maximun;
	int	*arr_range;
	int	size;
	int	count;

	minimun = 1;
	maximun = 11;
	count = 0;
	size = ft_ultimate_range(&arr_range, minimun, maximun);
	while (count < size) 
	{
		printf("%d\n", arr_range[count]);
		count++;
	}
	return (0);
}*/
