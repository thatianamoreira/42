/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:40:25 by tsoares-          #+#    #+#             */
/*   Updated: 2023/10/14 04:55:08 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(x) (x % 2 == 0)
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# include <unistd.h>

typedef int	t_bool;

t_bool	ft_is_even(int nbr);

#endif
