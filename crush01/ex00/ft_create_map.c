/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:08:17 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 16:16:03 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"

t_sky_map	ft_create_map(void)
{
	t_sky_map	pmap;
	int			k;

	pmap = malloc(TAB_SIZE * TAB_SIZE * sizeof(*pmap));
	if (pmap == NULL)
		return (NULL);
	k = 0;
	while (k < TAB_SIZE * TAB_SIZE)
	{
		pmap[k] = 0;
		++k;
	}
	return (pmap);
}
