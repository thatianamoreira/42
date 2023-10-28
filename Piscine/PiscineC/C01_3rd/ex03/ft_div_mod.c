/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 05:03:13 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/08 14:14:07 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	*ptr_div;
	int	*ptr_mod;
	int	div;
	int	mod;

	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(10, 3, ptr_div, ptr_mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}*/
