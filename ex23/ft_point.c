/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:42:52 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/07 22:28:12 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point -> x = 42;
	point -> y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("Point coordiantes: (%d,%d)\n", point.x, point.y);
	return (0);
}
