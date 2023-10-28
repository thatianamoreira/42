/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 01:41:03 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/08 14:16:08 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int	main(void)
{
	int	*ptr_a;
	int	*ptr_b;
	int	a;
	int	b;

	a = 7;
	b = 11;
	printf("%d\n", a);
        printf("%d\n", b);
	ptr_a = &a;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/
