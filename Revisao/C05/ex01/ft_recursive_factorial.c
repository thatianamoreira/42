/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:58:10 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/12 14:16:00 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (nb);
	else
	{
		nb = nb * ft_recursive_factorial(nb -1);
		return (nb);
	}
}
/*
int	main(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 5;
	num2 = 4;
	num3 = 3;
	printf("%d! = %d\n", num1, ft_recursive_factorial(num1));
	printf("%d! = %d\n", num2, ft_recursive_factorial(num2));
	printf("%d! = %d\n", num3, ft_recursive_factorial(num3));
	return (0);
}*/
