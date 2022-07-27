/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:21:37 by ibah              #+#    #+#             */
/*   Updated: 2022/07/10 13:32:15 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c != 'a')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, &c, 1);
}

/*
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
