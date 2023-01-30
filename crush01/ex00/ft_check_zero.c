/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:42:40 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 21:51:32 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"

int	ft_check_rowzero(t_sky_map map, int y)
{
	int	x;

	x = 0;
	while (x < TAB_SIZE)
	{
		if (map[AT(x, y)] == 0)
			return (1);
		++x;
	}
	return (0);
}

int	ft_check_collzero(t_sky_map map, int x)
{
	int	y;

	y = 0;
	while (y < TAB_SIZE)
	{
		if (map[AT(x, y)] == 0)
			return (1);
		++y;
	}
	return (0);
}
