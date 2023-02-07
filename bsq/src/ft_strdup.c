/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:05:29 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 15:09:42 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup_if(char *str, int (*f)(char))
{
	char	*s;
	int		k;
	int		allocl;

	s = malloc(1 * sizeof(*s));
	allocl = 1;
	if (s == NULL)
		return (NULL);
	k = 0;
	while (f(str[k]) && str[k] != '\0')
	{
		if (k >= allocl)
		{
			s = ft_realloc(s, allocl * sizeof(*s), allocl * 2 * sizeof(*s));
			allocl *= 2;
			if (s == NULL)
				return (NULL);
		}
		s[k] = str[k];
		++k;
	}
	s[k] = '\0';
	return (s);
}

char	*ft_strdup(char *str)
{
	char	*s;
	int		k;
	int		allocl;

	s = malloc(1 * sizeof(*s));
	allocl = 1;
	if (s == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
	{
		if (k >= allocl)
		{
			s = ft_realloc(s, allocl * sizeof(*s), allocl * 2 * sizeof(*s));
			allocl *= 2;
			if (s == NULL)
				return (NULL);
		}
		s[k] = str[k];
		++k;
	}
	s[k] = '\0';
	return (s);
}
