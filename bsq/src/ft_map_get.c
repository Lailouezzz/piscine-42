/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:54:30 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 17:02:15 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_tile	*ft_map_get(t_map *map, size_t x, size_t y)
{
	if (x >= map->width || y >= map->height)
		return (NULL);
	return (&map->tmap[x + (y * map->width)]);
}
