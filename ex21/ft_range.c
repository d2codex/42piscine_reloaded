/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:34:03 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/14 16:54:47 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*range;

	i = 0;
	min = 20;
	max = 30;
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free (range);
}
