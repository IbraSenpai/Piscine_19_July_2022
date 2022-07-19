/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:23:59 by ibah              #+#    #+#             */
/*   Updated: 2022/07/19 21:50:16 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int a, int b)
{
	int	result;

	result = a - b;
	if (result < 0)
		return (-result);
	return (result);
}

int	ft_feasible(int *chessboard, int i_queen)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (i < i_queen)
	{
		a = ft_abs(chessboard[i], chessboard[i_queen]);
		b = ft_abs(i, i_queen);
		if (chessboard[i] == chessboard[i_queen] || (a == b))
			return (0);
		i++;
	}
	return (1);
}

//int	ft_ten_queens_puzzle(void)
