/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:48:12 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 13:20:48 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define LINE_SIZE 80

/* return : string allocated by malloc of the line in fd */
char	*ft_getline(int fd)
{
	int		c;
	int		k;
	char	*s;
	char	*p;

	c = ft_getchar(fd);
	while (c == '\n')
		c = ft_getchar(fd);
	if (c == -1)
		return (NULL);
	s = malloc((LINE_SIZE + 1) * sizeof(*s));
	p = s;
	k = 0;
	while (c != -1 && c != '\n' && k < LINE_SIZE)
	{
		*s = c;
		c = ft_getchar(fd);
		++s;
		++k;
	}
	*s = '\0';
	return (p);
}
