/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:04:04 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 21:49:07 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"

int	ft_check_rowzero(t_sky_map map, int y);
int	ft_check_collzero(t_sky_map map, int x);

int	ft_check_collup(t_sky_ctx *ctx, t_sky_map map)
{
	int	x;
	int	y;
	int	saw;
	int	max;

	x = 0;
	while (x < TAB_SIZE)
	{
		saw = 0;
		max = 0;
		y = -1;
		while (++y < TAB_SIZE)
		{
			if (max < map[AT(x, y)])
			{
				++saw;
				max = map[AT(x, y)];
			}
		}
		if (saw != ctx->coll_up[x] && !ft_check_collzero(map, x))
			return (0);
		++x;
	}
	return (1);
}

int	ft_check_colldown(t_sky_ctx *ctx, t_sky_map map)
{
	int	x;
	int	y;
	int	saw;
	int	max;

	x = 0;
	while (x < TAB_SIZE)
	{
		saw = 0;
		max = 0;
		y = TAB_SIZE;
		while (y-- != 0)
		{
			if (max < map[AT(x, y)])
			{
				++saw;
				max = map[AT(x, y)];
			}
		}
		if (saw != ctx->coll_down[x] && !ft_check_collzero(map, x))
			return (0);
		++x;
	}
	return (1);
}

int	ft_check_rowleft(t_sky_ctx *ctx, t_sky_map map)
{
	int	x;
	int	y;
	int	saw;
	int	max;

	y = 0;
	while (y < TAB_SIZE)
	{
		saw = 0;
		max = 0;
		x = -1;
		while (++x < TAB_SIZE)
		{
			if (max < map[AT(x, y)])
			{
				++saw;
				max = map[AT(x, y)];
			}
		}
		if (saw != ctx->row_left[y] && !ft_check_rowzero(map, y))
			return (0);
		++y;
	}
	return (1);
}

int	ft_check_rowright(t_sky_ctx *ctx, t_sky_map map)
{
	int	x;
	int	y;
	int	saw;
	int	max;

	y = 0;
	while (y < TAB_SIZE)
	{
		saw = 0;
		max = 0;
		x = TAB_SIZE;
		while (x-- != 0)
		{
			if (max < map[AT(x, y)])
			{
				++saw;
				max = map[AT(x, y)];
			}
		}
		if (saw != ctx->row_right[y] && !ft_check_rowzero(map, y))
			return (0);
		++y;
	}
	return (1);
}
