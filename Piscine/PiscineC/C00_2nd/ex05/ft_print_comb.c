/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 01:53:51 by tsoares-          #+#    #+#             */
/*   Updated: 2023/07/29 10:44:02 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char a, char b, char c)
{
	char	comma;
	char	space;

	comma = 44;
	space = 32;
	if ((a < 55) && (b < 56) && (c < 57))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &comma, 1);
		write(1, &space, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while ((a < 56) && (a != b) && (a != c))
	{	
		while ((b < 57) && (b != c))
		{
			while (c < 58)
			{
				if ((a < b) && (a < c) && (b < c))
				{
					print_number(a, b, c);
					c++;
				}
				else
					c++;
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
