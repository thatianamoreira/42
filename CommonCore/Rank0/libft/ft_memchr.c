/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:21:01 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/22 22:44:30 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temps;
	size_t			i;

	temps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (temps[i] != c)
			i++;
		else
			return ((char *)(s + i));
	}
	return (NULL);
}
/*
int	main(void)
{
	char	source[] = "Eu sou o silêncio da noite";
	int		letter = 's';
	char	*find;

	find = ft_memchr(source, letter, sizeof(source));
	printf("%s\n", find);
	return (0);
}*/
