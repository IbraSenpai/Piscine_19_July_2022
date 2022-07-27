/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:07:08 by ibah              #+#    #+#             */
/*   Updated: 2022/07/12 19:22:19 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	check(int index, char *str)
{
	if (((str[index - 1] >= 'a' && str[index - 1] <= 'z')
			|| (str[index - 1] >= 'A' && str[index - 1] <= 'Z'))
		|| (str[index - 1] >= '0' && str[index - 1] <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				capital = check(i, str);
				if (capital)
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char tab[] = "slUt, coMment tu //v ? 42mots quarante-deux; cinquante+et+un n";

	printf("%s", ft_strcapitalize(tab));
}
*/
