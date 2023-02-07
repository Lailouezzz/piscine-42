/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:49:26 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 17:46:02 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_tile	ft_tile_by_char(const t_map *map, char c)
{
	if (c == map->empty)
		return (TILE_EMPTY);
	if (c == map->obstacle)
		return (TILE_OBSTACLE);
	if (c == map->full)
		return (TILE_FULL);
	return (TILE_UNK);
}

char	ft_char_by_tile(const t_map *map, t_tile tile)
{
	if (tile == TILE_EMPTY)
		return (map->empty);
	if (tile == TILE_OBSTACLE)
		return (map->obstacle);
	if (tile == TILE_FULL)
		return (map->full);
	return ('U');
}
