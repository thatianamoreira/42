/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:57:05 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/06 23:34:43 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void);

int	main(int argc, char *argv[])
{
	int	params[31];
	int	i;
	char	*str;

	str = argv[1];
	i = 0;
	if (argc != 2)
	{
		ft_print_error();
		return (-1);
	}
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] >= '1' && str[i] <= '4')
				params[i] = str[i] - 48;
			else
			{
				ft_print_error();
				return (-1);
			}
		}
		else if (str[i] != ' ')
		{
			ft_print_error();
			return (-1);
		}
		i++;
	}
	return (0);
}
