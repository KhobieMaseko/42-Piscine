/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:40:14 by khmaseko          #+#    #+#             */
/*   Updated: 2023/10/31 14:12:02 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0' && s2[index] != '\0')
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
