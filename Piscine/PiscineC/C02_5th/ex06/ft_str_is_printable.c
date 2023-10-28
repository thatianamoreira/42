/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:17:33 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/13 15:39:19 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 31) && (str[i] < 127))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "Be yourself!";
	char	str2[] = "\b";
	char	str3[] = "First line\nSecond line";
	char	str4[] = "";

	printf("str1 retorna %d\n", ft_str_is_printable(str1));
	printf("str2 retorna %d\n", ft_str_is_printable(str2));
	printf("str3 retorna %d\n", ft_str_is_printable(str3));
	printf("str4 retorna %d\n", ft_str_is_printable(str4));
}*/
