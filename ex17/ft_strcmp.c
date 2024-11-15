/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:21:21 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/13 20:04:10 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 3)
	{
		return (0);
	}
	while (i < argc - 1)
	{
		if (i % 2 == 1)
			printf("%d\n", ft_strcmp(argv[i], argv[i + 1]));
		i++;
	}
	return (0);
}
