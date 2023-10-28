/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 05:27:42 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/13 10:10:24 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length;

	length = 0;
	while (dest[length] != '\0')
		length++;
	i = 0;
	while ((src[i] != '\0') && (i < nb))
		dest[length++] = src[i++];
	dest[length] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[100] = "Deixe que o vento leve o desnecessário ";
	char	str2[] = "e traga boas novas! ESSA PARTE NÃO DEVE SER COPIADA!";
	unsigned	num = 19;

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str1 + str2: %s", ft_strncat(str1, str2, num));
	return (0);
}*/
