/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:48:18 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/11 22:57:56 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	this_one[] = "425a9";
	char	another_one[] = "5789";

	printf("this_one retorna %d\n", ft_str_is_numeric(this_one));
	printf("another_one retorna %d", ft_str_is_numeric(another_one));
	return (0);
}*/
