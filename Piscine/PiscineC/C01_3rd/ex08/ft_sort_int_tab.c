/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:12:42 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/08 14:30:50 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	vet[11] = {99, 5, 128, 59, 67, 23, 11, 7, 3, 25, 1};
	int	k;

	ft_sort_int_tab(vet, 11);

	k = 0;
	while(k < 11)
	{
		printf("%d\n", vet[k]);
		k++;
	}
	return (0);
}*/
