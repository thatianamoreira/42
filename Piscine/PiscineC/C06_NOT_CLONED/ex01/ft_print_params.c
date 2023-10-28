/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:21:28 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/18 02:00:36 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc,char **argv)
{
	int	t;
	int	i;
	
	t = 1;
	while (argc > t)
	{
		i = 0;
		while (argv[t][i])
		{
			write(1, &argv[t][i], 1);
			i++;
		}
		write(1, "\n", 1);
		t++;
	}
	return (0);
}
