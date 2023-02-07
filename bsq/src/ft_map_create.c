/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:36:29 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 17:22:59 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/* return : if the header is not good */
int	ft_map_check_header(char *s)
{
	return (ft_skip_if(s, ft_isdigit) - s == 0
		|| ft_strlen(ft_skip_if(s, ft_isdigit)) != 3);
}

/* return : 0 if error */
int	ft_map_parse_header(t_map *map, char *h)
{
	if (ft_map_check_header(h))
		return (0);
	map->height = ft_atoi(h);
	h = ft_skip_if(h, ft_isdigit);
	map->empty = h[0];
	map->obstacle = h[1];
	map->full = h[2];
	return (h[3] == '\0' && map->height > 0);
}

/* return : 0 if error */
int	ft_map_parse_tmap_line(t_map *map, char *l, size_t y)
{
	size_t	x;
	t_tile	t;

	if ((size_t) ft_strlen(l) != map->width)
		return (0);
	x = 0;
	while (x < map->width)
	{
		t = ft_tile_by_char(map, l[x]);
		if (t == TILE_UNK)
			return (0);
		*(ft_map_get(map, x, y)) = t;
		++x;
	}
	return (1);
}

/* return : 0 if error */
int	ft_map_parse_tmap(t_map *map, int fd)
{
	size_t	k;
	char	*l;

	l = ft_getline(fd);
	if (l == NULL)
		return (0);
	map->width = ft_strlen(l);
	map->tmap = malloc(map->width * map->height * sizeof(*map->tmap));
	k = 0;
	while (l != NULL && k < map->height)
	{
		if (ft_map_parse_tmap_line(map, l, k) == 0)
			break ;
		free(l);
		l = ft_getline(fd);
		++k;
	}
	if ((l != NULL && (size_t) ft_strlen(l) != map->width)
		|| k != map->height || l != NULL || map->width == 0)
	{
		free(l);
		return (0);
	}
	return (1);
}

t_map	*ft_map_create(int fd)
{
	t_map	*map;
	char	*l;

	map = malloc(sizeof(*map));
	map->tmap = NULL;
	l = ft_getline(fd);
	if (l == NULL
		|| ft_map_parse_header(map, l) == 0
		|| ft_map_parse_tmap(map, fd) == 0)
	{
		free(l);
		return (ft_map_free(map));
	}
	free(l);
	return (map);
}
