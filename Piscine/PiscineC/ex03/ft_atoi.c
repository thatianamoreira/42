/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:55:46 by tsoares-          #+#    #+#             */
/*   Updated: 2023/08/16 16:50:32 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	hyphen = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] > 8 && str[i] < 14)
			str[i] = str[i + 1];
		else if (str[i] == '-')
			hyphen *= -1;
		else if (str[i] > 47 && str[i] < 58)
			num = str[i] - 48; //*10 + str[i + 1]
		else if ((str[i] > 64 && str[i] < 91)
				|| str[i] > 96 && str[i] < 123)
	}
	return (num);
}

int	main(void)
{
	char str_atoi[17];

	str_atoi = " ---+--+1234ab567";
	ft_atoi(str_atoi);
	return (0);
}
