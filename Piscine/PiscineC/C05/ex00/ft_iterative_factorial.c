/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 05:29:38 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/18 21:09:19 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	count;

	i = 0;
	count = nb;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (count != 2)
			nb = nb * (count-- - 1);
		return (nb);
	}
}
/*
int	main(void)
{
	int	num;
	//char	num_fac;
	//char	result;

	num = 6;
	//num_fac = num + 48;
	printf("Fatorial de %d = %d", num, ft_iterative_factorial(num));
	//write(1, "Fatorial de ", 12);
	//write(1, num_fac, 1);
	//write(1, " = ", 3);
	//result = ft_iterative_factorial(num); // colocar a putnbr na verdade
	//write(1, , 1);
}*/
