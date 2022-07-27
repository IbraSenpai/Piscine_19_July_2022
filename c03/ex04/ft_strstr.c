/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:55:58 by ibah              #+#    #+#             */
/*   Updated: 2022/07/14 15:21:05 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i_str;
	int	i_to_find;

	i_str = 0;
	i_to_find = 0;
	if (!to_find[i_to_find])
		return (str);
	while (str[i_str])
	{
		while ((str[i_str + i_to_find] == to_find[i_to_find])
			&& (str[i_str + i_to_find]))
		{
			i_to_find++;
			if (!to_find[i_to_find])
				return (str + i_str);
		}
		i_to_find = 0;
		i_str++;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "blablabal yo blabla";
	char find[] = "yo ";
	printf("%s", ft_strstr(str, find));
}*/
