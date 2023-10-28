/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:47:48 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/22 21:21:50 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tempdest;
	unsigned char	*tempsrc;
	size_t			i;

	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return ((void *)dest);
}
/*
int	main(void)
{
	char	source[] = "Qualquer coisa";
	char	destination[] = "nguhdfgjfdgijdfjgodifjgoiç";
	size_t	num;

	num = 13;
	ft_memcpy(destination, source, num);
	printf("%s\n", destination);
	return (0);
}*/
