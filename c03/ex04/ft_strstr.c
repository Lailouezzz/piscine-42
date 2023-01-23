/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:31:36 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 14:50:02 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *s)
{
	int	k;

	k = 0;
	while (*s != '\0')
	{
		++k;
		++s;
	}
	return (k);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	k;

	if (n == 0)
		return (0);
	k = 0;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && k < n - 1)
	{
		++s1;
		++s2;
		++k;
	}
	return (*s1 - *s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*str == '\0' && *to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
			return (str);
		++str;
	}
	return (NULL);
}
