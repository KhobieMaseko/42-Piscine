/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:05:09 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/01 11:43:31 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	c;
	size_t	d;

	c = 0;
	d = 0;
	if ((dest == NULL) && (src == NULL))
	{
		return (NULL);
	}
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[d] != '\0' && d < nb)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}
