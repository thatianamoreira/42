/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:27:51 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/18 20:32:37 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	length_c;

	length_c = argc - 1;
	while (length_c > 0)
	{
		i = 0;
		while (argv[length_c][i])
		{
			write(1, &argv[length_c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		length_c--;
	}
	return (0);
}
