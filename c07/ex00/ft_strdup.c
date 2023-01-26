/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:05:01 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/25 17:08:59 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
		++k;
	return (k);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*p;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	p = dest;
	while (*src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (p);
}
