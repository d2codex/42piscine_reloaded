/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:04:01 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/13 21:11:20 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;
	int	result;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		num = atoi(argv[i]);
		result = ft_iterative_factorial(num);
		printf("%d\n", result);
		i++;
	}
	return (0);
}
