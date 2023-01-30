/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:36:25 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/30 14:06:33 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	display_file(char *fn)
{
	int		fd;
	char	c;
	ssize_t	r;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	r = read(fd, &c, 1);
	if (r == -1)
	{
		close(fd);
		return (0);
	}
	while (r == 1)
	{
		write(STDOUT_FILENO, &c, 1);
		r = read(fd, &c, 1);
	}
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(STDERR_FILENO, "File name missing.\n", 19);
		return (EXIT_SUCCESS);
	}
	if (argc > 2)
	{
		write(STDERR_FILENO, "Too many arguments.\n", 20);
		return (EXIT_SUCCESS);
	}
	if (display_file(argv[1]) != 1)
	{
		write(STDERR_FILENO, "Cannot read file.\n", 18);
		return (EXIT_SUCCESS);
	}
	return (EXIT_SUCCESS);
}
