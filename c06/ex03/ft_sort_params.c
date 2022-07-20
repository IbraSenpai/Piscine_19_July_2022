/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:26:22 by ibah              #+#    #+#             */
/*   Updated: 2022/07/20 16:15:22 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_str(char *str)
{
	int		i;
	int		j;
	char	tempo;

	i = 0;
	j = 1;
	while (str[i])
	{
		while (str[j])
		{
			if (str[i] > str[j])
			{
				tempo = str[i];
				str[i] = str[j];
				str[j] = tempo;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		j = 0;
		ft_sort_str(argv[i]);
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
