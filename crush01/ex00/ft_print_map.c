/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:24:23 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 21:52:12 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"

void	ft_print_map(t_sky_map map, int fd)
{
	int		x;
	int		y;
	char	buf;

	y = 0;
	while (y < TAB_SIZE)
	{
		buf = map[AT(0, y)] + '0';
		write(fd, &buf, 1);
		x = 1;
		while (x < TAB_SIZE)
		{
			buf = map[AT(x, y)] + '0';
			write(fd, " ", 1);
			write(fd, &buf, 1);
			++x;
		}
		write(fd, "\n", 1);
		++y;
	}
}
