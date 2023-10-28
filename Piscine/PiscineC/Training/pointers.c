/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:51:37 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/03 04:47:08 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	f1(char *c) // confirm that it's the right parameter
{
}

int	main(void)
{
	char	c;
	char	*ptr;

	c = 'L';
	ptr = &c;
	*ptr = 'O';
	c = 'O';
	f1(*ptr); //confirm it's like that or not
	write(1, &c, 1);
	return (1);
}
