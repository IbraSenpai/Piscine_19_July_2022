/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:56:40 by ibah              #+#    #+#             */
/*   Updated: 2022/07/19 18:33:53 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int main(void)
{
	int x;

	x = 5;
	printf("%d! = %d", x, ft_recursive_factorial(x));
	return (0);
}*/
