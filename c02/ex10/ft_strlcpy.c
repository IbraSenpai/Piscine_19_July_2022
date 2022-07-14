/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:30:17 by ibah              #+#    #+#             */
/*   Updated: 2022/07/13 15:56:38 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	size_tab(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;
	unsigned int	end;

	i = 0;
	end = size - 1;
	result = size_tab(src);
	if (size != 0)
	{
		while (src[i] && i < end)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (result);
}
