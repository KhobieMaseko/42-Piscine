/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:15:41 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/03 16:51:10 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	base;

	sign = 1;
	base = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' '
		|| *str == '\n' || *str == '\v' || *str == '\f')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		base = (*str - '0') + (base * 10);
		str++;
	}
	return (base * sign);
}
