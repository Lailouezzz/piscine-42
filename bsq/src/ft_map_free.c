/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:02:56 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 17:04:04 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_map_free(t_map *map)
{
	if (map == NULL)
		return (NULL);
	if (map->tmap != NULL)
		free(map->tmap);
	free(map);
	return (NULL);
}
