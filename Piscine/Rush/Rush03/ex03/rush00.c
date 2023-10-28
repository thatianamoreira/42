/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:03:07 by erpiana           #+#    #+#             */
/*   Updated: 2023/07/30 23:37:27 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_error(void);

int	rush_error(int x, int y)
{
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
	{
		ft_print_error();
		return (1);
	}
	return (0);
}

int	rush(int x, int y)
{
	int	i;
	int	j;

	if (rush_error(x, y))
		return (-1);
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1 || i == x)
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
