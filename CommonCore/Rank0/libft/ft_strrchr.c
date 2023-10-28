/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 05:25:03 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/19 08:18:58 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	length = ft_strlen(s) - 1;
	while (*(s + length))
	{
		if (*(s + length) == c)
			return ((char *)(s + length));
		length--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*source;
	int		letter;
	char	*lastl;

	source = "Have a nice day";
	letter = 'a';
	lastl = ft_strrchr(source, letter);
	printf("%s\n", lastl);
	return (0);
}*/
