/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:06:35 by ibah              #+#    #+#             */
/*   Updated: 2022/07/10 20:10:50 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result_div;
	int	result_mod;

	result_div = *a / *b;
	result_mod = *a % *b;
	*a = result_div;
	*b = result_mod;
}
