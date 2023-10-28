/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:25:44 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/12 14:51:33 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 2;
	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		while (i <= power)
		{
			res *= nb;
			i++;
		}
		return (res);
	}
}
/*
int	main(void)
{
	int	num;
	int	pow;
	int	result;

	num = 7;
	pow = 2;
	result = ft_iterative_power(num, pow);
	printf("%d^%d = %d\n", num, pow, result);
	return (0);
}*/
