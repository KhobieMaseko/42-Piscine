/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:04:03 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/10 15:33:07 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*string;
	char	*pointer;
	int		length;

	length = 0;
	while (src[length])
	{
		length++;
	}
	string = malloc(length + 1);
	pointer = string;
	while (*src)
	{
		*pointer++ = *src++;
	}
	*pointer = '\0';
	return (string);
}
