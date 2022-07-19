/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:20:42 by ibah              #+#    #+#             */
/*   Updated: 2022/07/19 19:44:16 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	root = 1;
	if (nb >= 2)
	{
		while (root < nb)
		{
			if (root * root == nb)
				return (root);
			root++;
		}
	}
	return (0);
}

/*int main()
{
    printf("%d", ft_sqrt(100));
	return (0);
}*/
