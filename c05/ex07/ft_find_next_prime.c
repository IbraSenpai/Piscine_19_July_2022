/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:08:55 by ibah              #+#    #+#             */
/*   Updated: 2022/07/19 20:24:23 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	div = nb - 1;
	while (div > 1)
	{
		if (nb % div == 0)
			return (0);
		div--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_nb;

	if (ft_is_prime(nb))
		return (nb);
	next_nb = nb + 1;
	while (! ft_is_prime(next_nb))
		next_nb++;
	return (next_nb);
}

/*int	main()
{
	printf("%d", ft_find_next_prime(10));
}*/
