/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 04:56:46 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/08 22:46:04 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a / *b;
	aux_b = *a % *b;
	*a = aux_a;
	*b = aux_b;
}
/*
int	main(void)
{
	int	*ptr_a;
	int	*ptr_b;
	int	a;
	int	b;

	ptr_a = &a;
	ptr_b = &b;
	a = 10;
	b = 2;
	printf("\n-------ANTES DA OPERAÇÃO-------\n");
	printf("a = %d\n", a);
	printf("b = %d\n\n", b);
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("-------DEPOIS DA OPERAÇÃO-------\n");
	printf("a / b = %d\n", a);
	printf("a mod b = %d\n\n", b);
}*/
