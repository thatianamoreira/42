/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 06:24:38 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/16 06:51:11 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	else if (nb == 1)
		return (1);
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return(nb);
	}
}
/*
int	main(void)
{
	int	num;

	num = 6;
	printf("Fatorial de %d = %d", num, ft_recursive_factorial(num));
}*/
