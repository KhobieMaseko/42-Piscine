/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:53:52 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/06 14:34:19 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
	while (c <= nb / 2)
	{
		if (nb % c == 0)
		{
			return (0);
		}
		else
		{
			c++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
