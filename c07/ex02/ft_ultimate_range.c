/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:07:05 by ibah              #+#    #+#             */
/*   Updated: 2022/07/25 16:01:46 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	nb_to_write;
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	nb_to_write = max - min;
	tab = malloc(sizeof(*tab) * nb_to_write);
	if (!tab)
		return (-1);
	i = 0;
	while (i < nb_to_write)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (nb_to_write);
}
/*#include <stdio.h>

int main()
{
	int **x;
	int	i;
	int	len;

	len = ft_ultimate_range(x,-1,7);
	i = 0;
	while (i < len)
	{
		printf("%d\n", x[0][i]);
		i++;
	}
	printf("len = %d\n", len);
	return (0);
}*/