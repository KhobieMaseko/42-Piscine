/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:05:33 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/07 10:07:20 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int		c;
	int		d;

	d = ac - 1;
	while (d > 0)
	{
		c = 0;
		while (av[d][c] != '\0')
		{
			ft_putchar(av[d][c]);
			c++;
		}
		ft_putchar('\n');
		d--;
	}
	return (0);
}
