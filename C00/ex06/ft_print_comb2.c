/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:42:44 by khmaseko          #+#    #+#             */
/*   Updated: 2023/10/24 17:43:39 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		y;
	int		z;

	y = 0;
	z = 0;
	while (y < 100)
	{
		z = y + 1;
		while (z < 100)
		{
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			ft_putchar(' ');
			ft_putchar(z / 10 + '0');
			ft_putchar(z % 10 + '0');
			if ((y != 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			z++;
		}
		y++;
	}
}
