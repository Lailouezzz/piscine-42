/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:32:21 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/02 21:38:07 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "ft.h"

int	except_handler(char *pn, char *serr)
{
	ft_putstr(STDERR_FILENO, pn);
	ft_putstr(STDERR_FILENO, ": ");
	ft_putstr(STDERR_FILENO, serr);
	ft_putstr(STDERR_FILENO, "\n");
	return (EXIT_FAILURE);
}

int	ft_get_c(int narg, char **arg)
{
	if (ft_strncmp(arg[0], "-c", 2) == 0)
	{
		if (narg >= 2 && ft_strisdigit(arg[1]) == 1)
			return (ft_atoi(arg[1]));
		else if (ft_strisdigit(arg[0] + 2) == 1)
			return (ft_atoi(arg[0] + 2));
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	int	c;

	if (argc <= 1)
	{
		return (except_handler(argv[0], "invalid number of arguments"));
	}
	c = ft_get_c(argc - 1, argv + 1);
	if (c < 0)
	{
		return (except_handler(argv[0], "invalid number of bytes"));
	}
	
	return (EXIT_SUCCESS);
}
