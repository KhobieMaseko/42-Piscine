/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:54:37 by khmaseko          #+#    #+#             */
/*   Updated: 2023/10/27 15:55:36 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 65) || (str[c] > 90 && str[c] < 97) || (str[c] > 122))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
