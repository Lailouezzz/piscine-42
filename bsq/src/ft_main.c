/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:58:20 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 18:42:02 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_except(void)
{
	ft_putstr(STDOUT_FILENO, "map error\n");
}

/* this function close fd for you <3 */
void	ft_resolve_map(int fd)
{
	t_map	*map;

	if (fd == -1)
	{
		ft_except();
		return ;
	}
	map = ft_map_create(fd);
	if (map == NULL)
	{
		ft_except();
		return ;
	}
	ft_map_fill_square(map, ft_map_biggest_sqr(map));
	ft_map_print(map, STDOUT_FILENO);
	ft_map_free(map);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	k;

	if (argc != 1)
	{
		k = 1;
		while (k < argc)
		{
			ft_resolve_map(open(argv[k], O_RDONLY));
			++k;
		}
	}
	else
		ft_resolve_map(STDIN_FILENO);
	return (0);
}
