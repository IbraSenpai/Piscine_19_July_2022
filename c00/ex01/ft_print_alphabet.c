/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:06:12 by ibah              #+#    #+#             */
/*   Updated: 2022/07/10 13:18:26 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c != 'z')
	{
		write(1, &c, 1);
		c++;
	}
	write(1, &c, 1);
}

/*
	int main()
	{
		ft_print_alphbet();
		return 0;
	}
*/
