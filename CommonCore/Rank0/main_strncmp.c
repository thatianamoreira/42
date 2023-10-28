/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:18 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/18 18:28:58 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	size_t	num;

	str1 = "Parede";
	str2 = "Parece";
	num = 5;
	printf("%d\n", ft_strncmp(str1, str2, num));
	return (0);
}
