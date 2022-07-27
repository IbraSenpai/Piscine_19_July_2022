/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:58:07 by ibah              #+#    #+#             */
/*   Updated: 2022/07/11 09:43:14 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
 */

void	ft_rev_int_tab(int *tab, int size)
{
	int	new_tab[1000];
	int	i_new;
	int	i_old;

	i_old = size - 1;
	i_new = 0;
	while (i_old >= 0)
	{
		new_tab[i_new] = tab[i_old];
		i_new++;
		i_old--;
	}
	i_new = 0;
	while (i_new < size)
	{
		tab[i_new] = new_tab[i_new];
		i_new++;
	}
}

/*
int main()
{
	int tab[] = {1,2,3};

	ft_rev_int_tab(tab,3);
	printf("%d,",tab[0]);	
	printf("%d ,",tab[1]);
	printf("%d",tab[2]);
}
*/
