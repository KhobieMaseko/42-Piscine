/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:33:27 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/11 15:20:50 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	*ptr;
	int	range;

	c = 0;
	ptr = NULL;
	range = (max - min);
	if (min > max)
	{
		return (NULL);
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
	{
		return (*range = NULL, 0);
	}
	if (!*range)
	{
		return (-1);
	}
	return (max - min);
}
