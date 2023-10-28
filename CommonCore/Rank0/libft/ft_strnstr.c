/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 08:38:54 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/19 09:15:01 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	length;

	if (*little == '\0')
		return ((char *)big);
	length = 0;
	while (*big && length < len)
	{
		if (*(big + length) == *little)
			return ((char *)little);
		length++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*bigstr;
	char	*littlestr;
	size_t	length;
	char	*localize;

	bigstr = "Paralelepipedo";
	littlestr = "lele";
	length = 8;
	localize = ft_strnstr(bigstr, littlestr, length);
	printf("%s\n", localize);
	return (0);
}*/
