/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sky_resolve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:11:18 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 21:51:20 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"

typedef struct s_point {
	int	x;
	int	y;
}	t_point;

t_point	ft_get_next_point(t_point xy)
{
	++xy.x;
	if (xy.x > TAB_SIZE)
	{
		++xy.y;
		xy.x = 1;
	}
	return (xy);
}

int	ft_get_first_possibility(t_sky_possibility p)
{
	int	k;

	k = 0;
	while (++k <= TAB_SIZE)
		if (((0x01 << (k - 1)) & p) != 0)
			break ;
	return (k);
}

int	ft_sky_resolve_aux(t_sky_ctx *ctx, t_sky_map map, t_point xy)
{
	t_sky_possibility	testedp;
	t_sky_possibility	ntestedp;
	int					k;

	if (ft_sky_isvalid(ctx, map) == 2)
		return (1);
	if (ft_sky_isvalid(ctx, map) == 0)
		return (0);
	testedp = 0;
	ntestedp = ALL_POSSIBLE;
	while (ntestedp != 0)
	{
		k = ft_get_first_possibility(ntestedp);
		if (k > TAB_SIZE)
			return (0);
		SET_POSSIBLE(testedp, k);
		map[AT(xy.x - 1, xy.y - 1)] = k;
		if (ft_sky_resolve_aux(ctx, map, ft_get_next_point(xy)) == 1)
			return (1);
		map[AT(xy.x - 1, xy.y - 1)] = 0;
		ntestedp = ALL_POSSIBLE ^ testedp;
	}
	return (0);
}

int	ft_sky_resolve(t_sky_ctx *ctx, t_sky_map map)
{
	t_point	p;

	p.x = 1;
	p.y = 1;
	return (ft_sky_resolve_aux(ctx, map, p));
}
