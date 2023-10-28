/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:54:54 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/12 16:19:29 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
		return (nb);
	}
}
/*
int	main(void)
{
	int	num;
	int	pow;

	num = 3;
	pow = 3;
	printf("%d^%d = %d\n", num, pow, ft_recursive_power(num, pow));
	return (0);
}*/
