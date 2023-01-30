/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sky_isvalid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:38:46 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 21:48:49 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"

int	ft_check_collup(t_sky_ctx *ctx, t_sky_map map);
int	ft_check_colldown(t_sky_ctx *ctx, t_sky_map map);
int	ft_check_rowleft(t_sky_ctx *ctx, t_sky_map map);
int	ft_check_rowright(t_sky_ctx *ctx, t_sky_map map);

int	ft_check_dupcoll(t_sky_map map)
{
	t_sky_possibility	p;
	int					x;
	int					y;

	x = -1;
	while (++x < TAB_SIZE)
	{
		p = 0;
		y = -1;
		while (++y < TAB_SIZE)
		{
			if (map[AT(x, y)] != 0 && IS_POSSIBLE(p, map[AT(x, y)]))
				return (1);
			else if (map[AT(x, y)] != 0)
				SET_POSSIBLE(p, map[AT(x, y)]);
		}
	}
	return (0);
}

int	ft_check_duprow(t_sky_map map)
{
	t_sky_possibility	p;
	int					x;
	int					y;

	y = -1;
	while (++y < TAB_SIZE)
	{
		p = 0;
		x = -1;
		while (++x < TAB_SIZE)
		{
			if (map[AT(x, y)] != 0 && IS_POSSIBLE(p, map[AT(x, y)]))
				return (1);
			else if (map[AT(x, y)] != 0)
				SET_POSSIBLE(p, map[AT(x, y)]);
		}
	}
	return (0);
}

int	ft_sky_isvalid(t_sky_ctx *ctx, t_sky_map map)
{
	int	k;

	if (ft_check_collup(ctx, map) == 0)
		return (0);
	if (ft_check_colldown(ctx, map) == 0)
		return (0);
	if (ft_check_rowleft(ctx, map) == 0)
		return (0);
	if (ft_check_rowright(ctx, map) == 0)
		return (0);
	if (ft_check_dupcoll(map) == 1)
		return (0);
	if (ft_check_duprow(map) == 1)
		return (0);
	k = 0;
	while (k < TAB_SIZE * TAB_SIZE)
	{
		if (map[k] == 0)
			return (1);
		++k;
	}
	return (2);
}
