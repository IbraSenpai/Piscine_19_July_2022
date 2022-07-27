/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:44:14 by ibah              #+#    #+#             */
/*   Updated: 2022/07/11 10:21:03 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	index_n1;
	int	index_n2;
	int	valeur_tempo;

	index_n1 = 0;
	index_n2 = 1;
	while (index_n1 < size)
	{
		while (index_n2 < size)
		{
			if (tab[index_n2] < tab[index_n1])
			{
				valeur_tempo = tab[index_n2];
				tab[index_n2] = tab[index_n1];
				tab[index_n1] = valeur_tempo;
			}
			index_n2++;
		}
		index_n1++;
		index_n2 = index_n1 + 1;
	}
}

/*int main()
{
	int tab[] = {4,2,1};
	ft_sort_int_tab(tab,3);
	printf("%d ,", tab[0]);
	printf("%d ,", tab[1]);
	printf("%d ,", tab[2]);
	return 0;
}
*/
