/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmaseko <khmaseko@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:29:40 by khmaseko          #+#    #+#             */
/*   Updated: 2023/11/07 16:09:40 by khmaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	arg_sort(int ac, char *av[])
{
	int		i;
	int		j;

	i = 0;
	while (i < ac - 1)
	{
		j = 0;
		while (j < ac - i - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				ft_swap(av[j], av[j + 1]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		write(1, av[i], 1);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	arg_sort(ac, av);
	return (0);
}

/* TEST CASES

# -> 35
) -> 41
0 -> 48
= -> 61
A -> 65
Z -> 90
[ -> 91
a -> 97
f -> 102
k -> 107
m -> 109
n -> 110
*/
