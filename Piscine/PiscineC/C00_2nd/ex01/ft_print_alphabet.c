/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:15:50 by tsoares-          #+#    #+#             */
/*   Updated: 2023/07/28 05:09:35 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 97;
	while (alphabet < 123)
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
