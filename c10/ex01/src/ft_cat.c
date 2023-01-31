/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:12:38 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/31 17:19:43 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

/* print error to STDERR_FILENO with the format of cat */
void	ft_cat_printerr(char *pn, char *fn, char *serr)
{
	ft_putstr(STDERR_FILENO, pn);
	ft_putstr(STDERR_FILENO, ": ");
	ft_putstr(STDERR_FILENO, fn);
	ft_putstr(STDERR_FILENO, ": ");
	ft_putstr(STDERR_FILENO, serr);
	ft_putstr(STDERR_FILENO, "\n");
}

/* return : always 0, dont call with fd == -1 ... */
int	ft_cat_file(int fd)
{
	char	buf[30 * 1024];
	ssize_t	s;

	if (fd == -1)
		return (-1);
	s = read(fd, buf, sizeof(buf));
	while (s != 0)
	{
		write(STDOUT_FILENO, buf, s);
		s = read(fd, buf, sizeof(buf));
	}
	return (0);
}

int	ft_cat(char **fns, int size, char *pn)
{
	int	k;
	int	fd;
	int	r;

	r = EXIT_SUCCESS;
	k = 0;
	while (k < size)
	{
		fd = open(fns[k], O_RDONLY);
		if (fd == -1)
		{
			r = EXIT_FAILURE;
			ft_cat_printerr(pn, fns[k], strerror(errno));
		}
		else
		{
			ft_cat_file(fd);
		}
		++k;
	}
	return (r);
}

int	main(int argc, char **argv)
{
	int	r;

	r = EXIT_SUCCESS;
	if (argc == 1)
	{
		if (ft_cat_file(STDIN_FILENO) != 0)
		{
			r = EXIT_FAILURE;
		}
		return (r);
	}
	return (ft_cat(argv + 1, argc - 1, argv[0]));
}
