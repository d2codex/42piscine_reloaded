/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:39:44 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/13 20:58:27 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(int argc, char **argv)
{
	int	i;
	int	n1;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		n1 = atoi(argv[i]);
		ft_ft(&n1);
		printf("%d\n", n1);
		i++;
	}
	return (0);
}
