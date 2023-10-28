/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:51:26 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/12 01:16:49 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	test1[] = "Hello World!";
	char	test2[] = "BeautifulDay";

	printf("test1 retorna %d\n", ft_str_is_alpha(test1));
	printf("test2 retorna %d", ft_str_is_alpha(test2));
	return (0);
}*/
