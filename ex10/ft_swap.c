/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:35:26 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/13 20:58:00 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	i;

	i = 1;
	if (argc < 3)
		return (0);
	while (i < argc - 1)
	{
		if (i % 2 == 1)
		{
			n1 = atoi(argv[i]);
			n2 = atoi(argv[i + 1]);
			printf("before swap: n1: %d n2: %d\n", n1, n2);
			ft_swap(&n1, &n2);
			printf("after swap:  n1: %d n2: %d\n", n1, n2);
		}
		i++;
	}
}
