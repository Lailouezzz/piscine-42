/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:06:21 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/27 15:29:45 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					k;
	struct s_stock_str	*stab;

	if (ac < 0)
		ac = 0;
	stab = malloc((ac + 1) * sizeof(*stab));
	if (stab == NULL)
		return (NULL);
	k = 0;
	while (k < ac)
	{
		stab[k].size = ft_strlen(av[k]);
		stab[k].str = av[k];
		stab[k].copy = ft_strdup(av[k]);
		++k;
	}
	stab[k].str = 0;
	return (stab);
}
