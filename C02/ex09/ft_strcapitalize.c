/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:02:14 by khmaseko          #+#    #+#             */
/*   Updated: 2023/10/30 12:47:55 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		start;
	int		rest;

	start = 0;
	rest = 1;
	while (str[start])
	{
		if ((str[start] >= '0' && str[start] <= '9')
			|| (str[start] >= 'a' && str[start] <= 'z')
			|| (str[start] >= 'A' && str[start] <= 'Z'))
		{
			if (rest && (str[start] >= 'a' && str[start] <= 'z'))
				str[start] -= 32;
			else if (!rest && (str[start] >= 'A' && str[start] <= 'Z'))
				str[start] += 32;
			rest = 0;
		}
		else
		{
			rest = 1;
		}
		start++;
	}
	return (str);
}
