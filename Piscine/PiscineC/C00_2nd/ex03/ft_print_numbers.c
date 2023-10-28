/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:18:26 by tsoares-          #+#    #+#             */
/*   Updated: 2023/07/29 04:30:02 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = 48;
	while (number < 58)
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/
