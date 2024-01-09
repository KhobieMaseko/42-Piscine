/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:26:08 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/12 11:36:04 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		a;
	int		b;
	int		c;

	s = malloc(sizeof(strs));
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			s[c++] = strs[a][b++];
		}
		b = 0;
		while (sep[b] != '\0' && a != size - 1)
		{
			s[c++] = sep[b++];
		}
		a++;
	}
	s[c] = '\0';
	return (s);
}
