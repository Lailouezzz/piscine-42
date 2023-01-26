/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:27:21 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/26 19:34:52 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	k;

	k = 0;
	while (s[k] != '\0')
		++k;
	return (k);
}

char	*lstrcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (dest);
}

char	*voidstr(void)
{
	char	*s;

	s = malloc(1 * sizeof(*s));
	*s = '\0';
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rstr;
	char	*p;
	int		rsize;
	int		k;

	if (size == 0)
		return (voidstr());
	rsize = (size - 1) * ft_strlen(sep) + 1;
	k = 0;
	while (k < size)
	{
		rsize += ft_strlen(strs[k]);
		++k;
	}
	rstr = malloc(rsize * sizeof(*rstr));
	k = 1;
	p = lstrcpy(rstr, strs[0]);
	while (k < size)
	{
		p = lstrcpy(p, sep);
		p = lstrcpy(p, strs[k]);
		++k;
	}
	return (rstr);
}
