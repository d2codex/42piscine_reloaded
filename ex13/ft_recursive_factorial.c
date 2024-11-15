/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:40:23 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/13 09:16:59 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb * ft_recursive_factorial((nb - 1));
	return (result);
}

int	main(int argc, char **argv)
{
	int	i;
	int	number;
	int	result;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		number = atoi(argv[i]);
		result = ft_recursive_factorial(number);
		printf("%d\n", result);
		i++;
	}
	return (0);
}
