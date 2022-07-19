/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:34:50 by ibah              #+#    #+#             */
/*   Updated: 2022/07/19 17:44:56 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*int main()
{
	int x;
	
	x = 0;
	printf("%d! = %d", x, ft_iterative_factorial(x));
	return 0;
}*/
