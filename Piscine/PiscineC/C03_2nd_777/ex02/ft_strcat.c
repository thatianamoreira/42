/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:31:19 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/13 18:17:55 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0')
		dest[length++] = src[i++];
	dest[length] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[100] = "A beleza que você vê nas coisas ";
	char	str2[] = "é um reflexo da beleza que existe em você!";

	printf("str1: %s\n", str1);
	printf("str2 %s\n", str2);
	printf("str1 + str2: %s", ft_strcat(str1, str2));
	return (0);
}*/
