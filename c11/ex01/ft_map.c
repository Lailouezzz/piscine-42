/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:52:17 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/02 23:09:59 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ntab;
	int	k;

	ntab = malloc(length * sizeof(*tab));
	if (ntab == NULL)
		return (NULL);
	k = 0;
	while (k < length)
	{
		ntab[k] = f(tab[k]);
		++k;
	}
	return (ntab);
}
