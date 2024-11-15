/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:21:23 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/13 12:54:09 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
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
		result = ft_sqrt(number);
		printf("%d\n", result);
		i++;
	}
	return (0);
}
