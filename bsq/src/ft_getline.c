/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:48:12 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/08 22:12:52 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define LINE_LIMIT 8192

/* return : string allocated by malloc of the line in fd */
char	*ft_getline(int fd)
{
	int		c;
	int		k;
	int		allocl;
	char	*s;

	c = ft_getchar(fd);
	if (c == -1)
		return (NULL);
	s = malloc(1 * sizeof(*s));
	if (s == NULL)
		return (NULL);
	allocl = 1;
	k = 0;
	while (c != -1 && c != '\n' && k < LINE_LIMIT)
	{
		if (k + 1 >= allocl)
		{
			s = ft_realloc(s, allocl * sizeof(*s), allocl * 2 * sizeof(*s));
			allocl *= 2;
		}
		s[k++] = c;
		c = ft_getchar(fd);
	}
	s[k] = '\0';
	return (s);
}
