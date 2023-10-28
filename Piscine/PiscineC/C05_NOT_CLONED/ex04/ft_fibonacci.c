/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:20:12 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/16 20:55:41 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;
	int	fibonacci[];

	i = 0;
	if (index < 0)
		return (-1);
	else
		while(i < index)
		{

		}
}

int	main(void)
{
	int	i;

	i = 6;
	printf("index: %d - retorna: %d", i, ft_fibonacci(i));
}
