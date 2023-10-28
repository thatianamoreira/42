/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:01:49 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/11 23:18:07 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "My queen";
	char	str2[] = "black power";
	char	str3[] = "frango";

	printf("str1 retorna %d\n", ft_str_is_lowercase(str1));
	printf("str2 retorna %d\n", ft_str_is_lowercase(str2));
	printf("str3 retorna %d\n", ft_str_is_lowercase(str3));
	return (0);
}*/
