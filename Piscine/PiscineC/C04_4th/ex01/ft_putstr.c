/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:12:01 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/18 04:23:31 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	str1[] = "Às vezes um desequilíbrio leva a um maior equilíbrio";
	char	str2[] = "Teste com\nquebra de linha";

	ft_putstr(str1);
	write(1, "\n", 1);
	ft_putstr(str2);
	return (0);
}*/
