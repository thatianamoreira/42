/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:30:26 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/13 14:03:45 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "";
	char	str2[] = "Power to the people!";
	char	str3[] = "DANDARA";

	printf("str1 retorna %d\n", ft_str_is_uppercase(str1));
	printf("str2 retorna %d\n", ft_str_is_uppercase(str2));
	printf("str3 retorna %d", ft_str_is_uppercase(str3));
	return (0);
}*/
