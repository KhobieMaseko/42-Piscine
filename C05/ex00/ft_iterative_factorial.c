/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:57:01 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/05 13:43:49 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	c;
	int	factor;

	c = 1;
	factor = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (c <= nb)
	{
		factor = factor * c;
		c++;
	}
	return (factor);
}
