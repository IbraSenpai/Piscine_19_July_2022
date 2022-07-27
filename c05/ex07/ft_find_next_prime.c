/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:08:55 by ibah              #+#    #+#             */
/*   Updated: 2022/07/20 23:30:32 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	unsigned int	root;
	unsigned int	new_nb;

	new_nb = nb;
	root = 2;
	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	while ((root * root) <= new_nb)
	{
		if ((new_nb % root) == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		root++;
	}	
	return (nb);
}

/*int	main()
{
	printf("%d", ft_find_next_prime(5));
}*/
