/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:54:20 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/11 18:18:53 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		num = atoi(argv[i]);
		ft_is_negative(num);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
