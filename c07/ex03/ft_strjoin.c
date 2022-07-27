/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:03:47 by ibah              #+#    #+#             */
/*   Updated: 2022/07/27 22:30:35 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen_total(char *str1, char **str2)
{
	int	i;
	int	j;
	int	len_sep;
	int	len_total;

	i = 0;
	j = 0;
	len_sep = ft_strlen(str1);
	len_total = 0;
	while (str2[i])
	{
		while (str2[i][j++])
			len_total ++;
		len_total += len_sep;
		j = 0;
		i++;
	}
	len_total -= len_sep;
	return (len_total);
}

void	ft_strcat1(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = ft_strlen(dest);
	i_src = 0;
	while (src[i_src])
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	dest[i_dest] = '\0';
}

void	ft_strcat2(char *dest, char **src, int i)
{
	int	i_dest;
	int	i_src;

	i_dest = ft_strlen(dest);
	i_src = 0;
	while (src[i][i_src])
	{
		dest[i_dest] = src[i][i_src];
		i_src++;
		i_dest++;
	}
	dest[i_dest] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(*dest) * (ft_strlen_total(sep, strs) + 1));
	if (!dest)
		return (0);
	if (size == 0)
		return (dest);
	while (strs[i])
	{
		ft_strcat2(dest, strs, i);
		if (strs[i + 1])
			ft_strcat1(dest, sep);
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	int		size;
	char	sep[] = "***";
	char	*result;
	char	**strs;

	size = 7;
	strs = malloc(sizeof(*strs) * size);
	strs[0] = "Where";
	strs[1] = "is";
	strs[2] = "Brayan ?";
	strs[3] = "probably";
	strs[4] = "in";
	strs[5] = "the";
	strs[6] = "kitchen";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(strs);
	free(result);
}