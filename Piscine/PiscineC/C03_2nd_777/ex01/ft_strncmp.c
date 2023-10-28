/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 06:15:21 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/13 18:15:39 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "Marco";
	char	str2[] = "Margarida";
	unsigned int	num;

	num = 3;
	printf("Retorna: %d\n", ft_strncmp(str1, str2, num));

	num = 5;
        printf("Retorna: %d", ft_strncmp(str1, str2, num));
	return (0);
}*/
