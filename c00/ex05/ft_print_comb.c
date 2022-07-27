/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:03:37 by ibah              #+#    #+#             */
/*   Updated: 2022/07/10 17:27:22 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb)
{
	char	c;

	c = nb + '0';
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	nb[3];

	nb[0] = 0;
	nb[1] = 1;
	nb[2] = 2;
	while (nb[0] < 7)
	{
		while (nb[1] < 9)
		{
			while (nb[2] < 10)
			{
				print_number(nb[0]);
				print_number(nb[1]);
				print_number(nb[2]);
				write (1, ", ", 2);
				nb[2]++;
			}
			nb[1]++;
			nb[2] = nb[1] + 1;
		}
		nb[0]++;
		nb[1] = nb[0] + 1;
		nb[2] = nb[0] + 2;
	}
	write (1, "789\n", 4);
}


int	main(void)
{
	ft_print_comb();
	return 0;
}

