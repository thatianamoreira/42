/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 06:52:04 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/16 09:47:11 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pot;
	
	i = 1;
	pot = nb;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			pot = pot * nb;
			i++;
		}
		return(pot);
	}
}
/*
int	main(void)
{
	int	num;
	int	exp;

	num = 2;
	exp = -3;
	printf("%d ^ %d = %d\n", num, exp, ft_iterative_power(num, exp));

	num = 0;
        exp = 0;
        printf("%d ^ %d = %d\n", num, exp, ft_iterative_power(num, exp));

	num = 2;
        exp = 0;
        printf("%d ^ %d = %d\n", num, exp, ft_iterative_power(num, exp));

	num = 2;
        exp = 3;
        printf("%d ^ %d = %d\n", num, exp, ft_iterative_power(num, exp));
}*/
