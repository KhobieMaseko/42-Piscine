/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:27:01 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/06 10:01:04 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root * root <= nb && root <= 46340)
	{
		if (root * root == nb)
		{
			return (root);
		}
		else
		{
			root++;
		}
	}
	return (0);
}
