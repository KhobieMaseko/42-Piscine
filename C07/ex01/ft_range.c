/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:57:10 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/12 13:33:39 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	*ptr;
	int	*n_ptr;
	int	range;

	c = 0;
	n_ptr = NULL;
	ptr = NULL;
	range = (max - min);
	if (min >= max)
	{
		return (n_ptr);
	}
	else
	{
		ptr = malloc(sizeof(int) * range);
	}
	while (c < range)
	{
		ptr[c] = min + c;
		c++;
	}
	return (ptr);
}
