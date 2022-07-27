/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:26:22 by ibah              #+#    #+#             */
/*   Updated: 2022/07/21 16:01:15 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tempo;

	tempo = *s1;
	*s1 = *s2;
	*s2 = tempo;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	i = 1;
	j = i + 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
