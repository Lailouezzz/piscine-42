/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:28:59 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 17:46:20 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_MAP_H
# define FT_MAP_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>

typedef enum s_tile {
	TILE_EMPTY,
	TILE_OBSTACLE,
	TILE_FULL,
	TILE_UNK
}	t_tile;

typedef struct s_map {
	size_t	width;
	size_t	height;
	char	empty;
	char	obstacle;
	char	full;
	t_tile	*tmap;
}	t_map;

typedef struct s_square {
	size_t	size;
	size_t	x;
	size_t	y;
}	t_square;

t_tile		ft_tile_by_char(const t_map *map, char c);

char		ft_char_by_tile(const t_map *map, t_tile tile);

/* return : NULL if parsing error
 *		a pointer to the map structure
 *			ft_map_create does not close fd for you */
t_map		*ft_map_create(int fd);

/* free the map and return NULL */
void		*ft_map_free(t_map *map);

/* return : the biggest square that can be put in the map */
t_square	ft_map_biggest_sqr(const t_map *map);

/* fill the sqr with TILE_FULL in the map */
void		ft_map_fill_square(t_map *map, t_square sqr);

/* return : NULL if x or y is greater than width or height of the map
 *		or a pointer to the associated t_tile in the map */
t_tile		*ft_map_get(t_map *map, size_t x, size_t y);

/* print the map to fd */
void		ft_map_print(const t_map *map, int fd);

#endif
