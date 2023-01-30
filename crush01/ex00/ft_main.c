/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:17:27 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 21:53:39 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"

int	error(void)
{
	write(STDOUT_FILENO, "Error\n", 6);
	return (0);
}

int	main(int argc, char **argv)
{
	t_sky_ctx	*ctx;
	t_sky_map	map;

	if (argc != 2)
		return (error());
	ctx = ft_create_ctx(argv[1]);
	if (ctx == NULL)
		return (error());
	map = ft_create_map();
	if (map == NULL)
		return (error());
	if (ft_sky_resolve(ctx, map) != 1)
		return (error());
	ft_print_map(map, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
