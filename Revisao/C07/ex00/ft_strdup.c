/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:20:13 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/14 18:38:08 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) * sizeof(src) + 2);
	if (dest == NULL)
		return (NULL);
	else
		ft_strcpy(src, dest);
	return (dest);
}

int	main(void)
{
	char	*source;
	char	*destiny;
	int	i;

	source = "Qualquer coisa\n";
	destiny = ft_strdup(source);
	i = 0;
	while (destiny[i] != '\0')
	{
		write(1, &destiny[i], 1);
		i++;
	}
	return (0);
}
