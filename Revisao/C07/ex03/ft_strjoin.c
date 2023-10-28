/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:16:05 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/14 22:24:04 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
char	ft_strcpy()
{
}
*/
char	*ft_strjoin(int size, char **strs, char *sep)
{
	strs = malloc(size * sizeof(strs));
	if (strs == NULL)
		return (NULL);
	else
	{
	}
	return (strs);

	//if size is 0, it should a freeable empty string
}

int	main(void)
{
	char	**strings;
	char	str1;
	char	str2;
	char	*separator;
	int	sz;
	int	i;

	sz = 3;
	strings[0] = "Concatenando";
	str1 = "todas as";
	str2 = "strings";
	separator = " ";

	if (sz == 0)
		return (0);
	else
		ft_strjoin(sz, **strings, *separator);
	while (i < size)
		printf("%s\n", strings[i++]);
	return (0);
}
