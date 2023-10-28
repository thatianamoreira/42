/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:26:32 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/12 14:13:18 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		while (i != 2)
		{
			nb = nb * (i - 1);
			i--;
		}
		return (nb);
	}
}
/*
int	main(void)
{
	int	num;
	int	result;

	num = 5;
	result = ft_iterative_factorial(num);
	printf("%d! = %d\n", num, result);
	return (0);
}*/
