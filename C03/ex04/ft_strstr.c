/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:12:37 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/01 10:09:31 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;

	c = 0;
	while (to_find[0] != '\0')
	{
		if (str[c] == '\0')
		{
			return (NULL);
		}
		d = 0;
		while (str[c + d] == to_find[d] && str[c + d] != '\0')
		{
			d++;
		}
		if (to_find[d] == '\0')
		{
			return (str + c);
		}
		c++;
	}
	return (str);
}
