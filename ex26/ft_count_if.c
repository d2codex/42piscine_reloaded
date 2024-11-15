/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:53:44 by diade-so          #+#    #+#             */
/*   Updated: 2024/11/08 22:04:51 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_uppercase(char *str)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	char	*tab[] = {"Hello", "23522332", "World", "Mrs", "doubtfire", NULL};

	printf("%d\n", ft_count_if(tab, is_uppercase));
}
