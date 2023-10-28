/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:58:48 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/13 14:07:49 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "black power";
	char	str2[] = "Tyler, the creator";

	printf("str1: %s\n", ft_strupcase(str1));
	printf("str2: %s", ft_strupcase(str2));
	return (0);
}*/
