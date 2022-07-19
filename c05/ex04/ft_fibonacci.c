/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:19:53 by ibah              #+#    #+#             */
/*   Updated: 2022/07/19 19:16:15 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main()
{
	printf("%d", ft_fibonacci(6));
}*/
