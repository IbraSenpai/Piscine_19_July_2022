/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:42:31 by ibah              #+#    #+#             */
/*   Updated: 2022/07/14 20:24:12 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

/*int    main()
{
	printf("%d", ft_strncmp("0123", "012345", 5));
}*/
