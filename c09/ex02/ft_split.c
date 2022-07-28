/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:50:27 by ibah              #+#    #+#             */
/*   Updated: 2022/07/27 21:56:32 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (charset[j] && (c != charset[j]))
		j++;
	if (c == charset[j])
		return (1);
	else
		return (0);
}

int	word_counter(char *str, char *charset)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && check_charset(str[i], charset) == 1)
			i++;
		if (check_charset(str[i], charset) == 0)
		{
			wc++;
			while (str[i] && check_charset(str[i], charset) == 0)
				i++;
		}
	}
	return (wc);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && check_charset(str[i], charset) != 1)
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(*tab) * (word_counter(str, charset) + 1));
	if (!tab)
		return (0);
	while (str[i] && j < word_counter(str, charset))
	{
		while (str[i] && check_charset(str[i], charset) == 1)
			i++;
		tab[j] = malloc(sizeof(*str) * (ft_strlen(&str[i], charset) + 1));
		if (!tab[j])
			return (0);
		while (str[i] && check_charset(str[i], charset) == 0)
			tab[j][k++] = str[i++];
		tab[j++][k] = '\0';
		k = 0;
	}
	tab[j] = 0;
	return (tab);
}


/*#include <stdio.h>
int	main(void)
{
	char	str[] = "?abc!def?ghi?klm!";
	char	charset[] = "!?";
	int		i;
	char	**tab;
	i = 0;
	printf("%d\n", word_counter(str, charset));
	tab = ft_split(str, charset);
	while (tab[i] != 0)
	{
		printf("%p: %s\n", tab[i], tab[i]);
		i++;
	}
	free(tab);
}
*/
