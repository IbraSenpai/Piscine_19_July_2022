/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:22:20 by ibah              #+#    #+#             */
/*   Updated: 2022/07/15 20:52:37 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	len_dest;
	unsigned int	len_src;

	i_dest = ft_strlen(dest);
	i_src = 0;
	len_dest = i_dest;
	len_src = ft_strlen(src);
	if ((size <= len_dest) || (size == 0))
		return (len_src + size);
	while ((src[i_src]) && (i_src < size - len_dest - 1))
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	dest[i_dest] = '\0';
	return (len_src + len_dest);
}

/*int main (void)
{
	char src[] = "ibrahim";
    	char dest [] = "01";
    printf("%i \n", ft_strlcat(dest, src, 15));
    printf("%s \n", dest);
}*/	
