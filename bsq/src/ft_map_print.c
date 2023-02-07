/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:05:44 by Onizukkka         #+#    #+#             */
/*   Updated: 2023/02/07 17:47:07 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_map_print(const t_map *map, int fd)
{
	size_t	k;
	char	c;

	k = 0;
	while (k < map->width * map->height)
	{
		c = ft_char_by_tile(map, map->tmap[k]);
		write(fd, &c, 1);
		++k;
		if (k % map->width == 0 && k != 0)
			write(fd, "\n", 1);
	}
}
