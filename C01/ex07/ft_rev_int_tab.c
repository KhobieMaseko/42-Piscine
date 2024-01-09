/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:35:04 by khmaseko          #+#    #+#             */
/*   Updated: 2023/10/25 19:36:18 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		rev;

	i = 0;
	while (i < (size / 2))
	{
		rev = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = rev;
		i++;
	}
}
