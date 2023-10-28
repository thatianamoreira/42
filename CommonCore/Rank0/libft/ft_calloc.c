/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:29:45 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/27 15:52:54 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsz;
	void	*ptr_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	totalsz = nmemb * size;
	if (totalsz / nmemb != size)
		return (NULL);
	else
		ptr_arr = malloc(totalsz);
	if (ptr_arr)
		ft_memset(ptr_arr, 0, totalsz);
	return (ptr_arr);
}
/*
int	main(void)
{
	int	*arr;
	size_t	num;
	size_t	sz;
	size_t	i;
	
	num = 10;
	arr = ft_calloc(num, sizeof(sz));
	i = 0;
	while (i++ < num)
		printf("%ldª posição: %d\n", i, arr[i]);
	return (0);	
}*/
