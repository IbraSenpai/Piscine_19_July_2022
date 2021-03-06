/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:30:43 by ibah              #+#    #+#             */
/*   Updated: 2022/07/14 12:41:53 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

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

/*int	main()
{
	printf("%d", ft_strcmp("012", "0123"));
	printf("\n%d", ft_strcmp("0123", "0"));
	printf("\n%d", ft_strcmp("0", "0"));
}*/
