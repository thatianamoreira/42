/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 05:15:53 by tsoares-          #+#    #+#             */
/*   Updated: 2023/07/28 21:39:50 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char l)
{
	write(1, &l, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 122;
	while (letter > 96)
	{
		putchar(letter);
		letter--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
