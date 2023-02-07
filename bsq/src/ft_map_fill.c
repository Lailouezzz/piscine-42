/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:16:51 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 18:18:16 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_map_fill_square(t_map *map, t_square sqr)
{
	size_t	x;
	size_t	y;

	x = sqr.x;
	while (x < sqr.x + sqr.size && x < map->width)
	{
		y = sqr.y;
		while (y < sqr.y + sqr.size && y < map->height)
		{
			*(ft_map_get(map, x, y)) = TILE_FULL;
			++y;
		}
		++x;
	}
}
