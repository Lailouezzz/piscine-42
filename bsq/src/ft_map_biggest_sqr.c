/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_biggest_sqr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:58:34 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 18:44:54 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/* return : 1 if valid 0 if square is not valid */
int	ft_map_sqr_valid(const t_map *map, t_square sqr)
{
	size_t	x;
	size_t	y;

	if (sqr.x + sqr.size > map->width || sqr.y + sqr.size > map->height)
		return (0);
	x = sqr.x;
	while (x < sqr.x + sqr.size && x < map->width)
	{
		y = sqr.y;
		while (y < sqr.y + sqr.size && y < map->height)
		{
			if (*(ft_map_get((t_map *)map, x, y)) != TILE_EMPTY)
				return (0);
			++y;
		}
		++x;
	}
	return (1);
}

t_square	ft_map_bigsqr_at(const t_map *map, int x, int y)
{
	t_square	maxsqr;

	maxsqr.x = x;
	maxsqr.y = y;
	maxsqr.size = 0;
	while (ft_map_sqr_valid(map, maxsqr) == 1)
		++maxsqr.size;
	--maxsqr.size;
	return (maxsqr);
}

t_square	ft_map_biggest_sqr(const t_map *map)
{
	t_square	maxsqr;
	t_square	sqr;
	size_t		x;
	size_t		y;

	maxsqr = ft_map_bigsqr_at(map, 0, 0);
	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			sqr = ft_map_bigsqr_at(map, x, y);
			if (sqr.size > maxsqr.size)
				maxsqr = sqr;
			++x;
		}
		++y;
	}
	return (maxsqr);
}
