/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:58:24 by ibah              #+#    #+#             */
/*   Updated: 2022/07/25 16:01:20 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	nb_to_write;
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	nb_to_write = max - min;
	tab = malloc(sizeof(*tab) * nb_to_write);
	if (!tab)
		return (0);
	i = 0;
	while (i < nb_to_write)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int main()
{
	int *x;
	int	i;

	x = ft_range(1,5);
	i = 0;
	while (x[i])
	{
		printf("%d\n", x[i]);
		i++;
	}
	return (0);
}*/