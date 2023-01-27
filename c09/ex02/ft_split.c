/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:43:18 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/27 14:14:21 by ale-boud         ###   ########.fr       */
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

int	ft_char_in_str(char c, char *charset)
{
	int	k;

	k = 0;
	while (k < ft_strlen(charset))
	{
		if (c == charset[k])
			return (1);
		++k;
	}
	return (0);
}

int	ft_split_nb_str(char *str, char *charset)
{
	int	k;

	k = 0;
	while (ft_char_in_str(*str, charset))
		++str;
	while (*str != '\0')
	{
		if (ft_char_in_str(*str, charset))
		{
			++k;
			while (ft_char_in_str(*str, charset))
				++str;
		}
		else
			++str;
	}
	if (!ft_char_in_str(*(str - 1), charset))
		++k;
	return (k);
}

char	*ft_strduptol(char *src, char *charset)
{
	int		k;
	char	*p;

	k = 0;
	while (!ft_char_in_str(src[k], charset) && src[k] != '\0')
	{
		++k;
	}
	p = malloc((k + 1) * sizeof(*p));
	if (p == NULL || k == 0)
		return (NULL);
	--k;
	while (k != 0)
	{
		p[k] = src[k];
		--k;
	}
	*p = *src;
	return (p);
}

char	**ft_split(char *str, char *charset)
{
	char	**stab;
	int		k;

	stab = malloc((ft_split_nb_str(str, charset) + 1) * sizeof(*stab));
	k = 0;
	while (ft_char_in_str(*str, charset))
		++str;
	while (*str != '\0')
	{
		if (ft_char_in_str(*str, charset))
			while (ft_char_in_str(*str, charset))
				++str;
		else
		{
			stab[k] = ft_strduptol(str, charset);
			str += ft_strlen(stab[k++]);
		}
	}
	stab[k] = NULL;
	return (stab);
}
