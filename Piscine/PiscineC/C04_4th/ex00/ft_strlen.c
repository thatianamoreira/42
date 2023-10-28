/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:25:05 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/18 04:25:18 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}
/*
int	main(void)
{
	char	str1[] = "Power to the people";
	char	str2[] = "Mansa Musa";
	char	str3[] = "";
	char	str4[] = " ";
	char	str5[] = "2\n2";

	printf("\n---------------TESTES---------------\n");
	printf("Power to the people: %d caractere(s)\n", ft_strlen(str1));
	printf("Mansa Musa: %d caractere(s)\n", ft_strlen(str2));
	printf("String vazia: %d caractere(s)\n", ft_strlen(str3));
	printf("Espaço: %d caractere(s)\n", ft_strlen(str4));
	printf("2'quebra de linha'2: %d caractere(s)", ft_strlen(str5));
	printf("\n------------------------------------\n\n");
	return (0);
}*/
