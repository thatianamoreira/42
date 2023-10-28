/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 05:42:30 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/19 03:49:27 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*source;
	int		a;
	char	*l;

	source = "Bom dia!";
	a = 'm';
	l = ft_strchr(source, a);
	printf("%s\n", l);
	return (0);
}*/
