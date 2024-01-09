/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:55:25 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/07 10:02:52 by khmaseko         ###   ########.fr       */
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

	c = 1;
	if (ac > 1)
	{
		while (c < ac)
		{
			d = 0;
			while (av[c][d] != '\0')
			{
				ft_putchar(av[c][d]);
				d++;
			}
			ft_putchar('\n');
			c++;
		}
	}
	return (0);
}
