/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:48:19 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/16 17:18:58 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	pot;

	pot = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		pot = pot * ft_recursive_power(nb, power - 1);
	
	return (pot);
}
/*
int	main(void)
{
	int	number;
	int	exp;
	
	number = 2;
	exp = 3;
	printf("%d ^ %d = %d\n", number, exp, ft_recursive_power(number, exp));

	number = 2;
        exp = 0;
        printf("%d ^ %d = %d\n", number, exp, ft_recursive_power(number, exp));
	
	number = 0;
        exp = 0;
        printf("%d ^ %d = %d\n", number, exp, ft_recursive_power(number, exp));

	number = 2;
        exp = -3;
        printf("%d ^ %d = %d\n", number, exp, ft_recursive_power(number, exp));
}*/
