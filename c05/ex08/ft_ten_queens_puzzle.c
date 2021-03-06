/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:23:59 by ibah              #+#    #+#             */
/*   Updated: 2022/07/20 18:58:29 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>
#include <unistd.h>

int	ft_abs(int a, int b)
{
	int	result;

	result = a - b;
	if (result < 0)
		result *= -1;
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

void	ft_print_chessboard(int *chessboard)
{
	int		i;
	char	nb;

	i = 0;
	while (i < 10)
	{
		nb = chessboard[i] + '0';
		write(1, &nb, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_solver(int *chessboard, int i_queen, int n_queen, int *count)
{
	int	i;
	int	tempo;

	if (i_queen == n_queen)
	{
		tempo = count[0];
		count[0] = tempo + 1;
		return (ft_print_chessboard(chessboard));
	}
	i = 0;
	while (i < n_queen)
	{
		chessboard[i_queen] = i;
		if (ft_feasible(chessboard, i_queen))
		{
			ft_solver(chessboard, i_queen + 1, n_queen, count);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chessboard[10];
	int	i;
	int	n_queen;
	int	count[1];

	i = 0;
	while (i < 10)
	{
		chessboard[i] = 0;
		i++;
	}
	i = 0;
	n_queen = 10;
	count[0] = 0;
	ft_solver(chessboard, i, n_queen, count);
	return (*count);
}

/*int main()
{
	printf("%d",ft_ten_queens_puzzle());
	return (0);
}*/
