/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:57:56 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/08 10:40:24 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		size--;
		i++;
	}
}
/*
int	main(void)
{
	int	vet[5] = {1, 2, 3, 4, 5};
	int	k;
	int	length;

	ft_rev_int_tab(vet, 5);

	length = 5;
	k = 0;
	while(k < length)
	{
		printf("%d", vet[k]);
		k++;
	}	
	return (0);
}*/
