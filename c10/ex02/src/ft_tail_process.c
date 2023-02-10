/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_process.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:15:22 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 17:03:53 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include "ft_tail.h"

ssize_t	ft_tail_read(int fd, char *buf, unsigned int c)
{
	int		readed;
	char	*tmp;

	tmp = malloc(1024 * 1024 * 32);
	readed = read(fd, tmp, 1024 * 1024 * 32);
	if ((unsigned int)readed > c)
	{
		memcpy(buf, tmp + readed - c, c);
		free(tmp);
		return (c);
	}
	memcpy(buf, tmp, readed);
	free(tmp);
	return (readed);
}

void	ft_tail_print_header(char *fn)
{
	ft_putstr(STDOUT_FILENO, "==> ");
	if (fn == NULL)
		ft_putstr(STDOUT_FILENO, "standard input");
	else
		ft_putstr(STDOUT_FILENO, fn);
	ft_putstr(STDOUT_FILENO, " <==\n");
}

int	_ft_tail_process_file(t_config *config, char *fn, int fd, unsigned int c)
{
	char	*buf;

	buf = malloc(c * sizeof(*buf));
	if (buf == NULL)
		return (-1);
	if (config->nfn > 1)
		ft_tail_print_header(fn);
	c = (unsigned int)ft_tail_read(fd, buf, c);
	write(STDOUT_FILENO, buf, c);
	free(buf);
	return (0);
}

int	ft_tail_process_file(t_config *config, char *fn, unsigned int c)
{
	int		fd;
	int		r;

	r = 0;
	if (fn == NULL)
		fd = STDIN_FILENO;
	else
		fd = open(fn, O_RDONLY);
	if (fd == -1)
	{
		ft_tail_read_err(config->pn, fn, strerror(errno));
		return (-1);
	}
	if (_ft_tail_process_file(config, fn, fd, c) != 0)
		r = -1;
	close(fd);
	return (r);
}

int	ft_tail_process(t_config *config)
{
	int	k;
	int	r;

	if (config->nfn == 0)
		return (ft_tail_process_file(config, NULL, config->c));
	r = 0;
	k = 0;
	while (k < config->nfn)
	{
		if (ft_tail_process_file(config, config->fns[k], config->c) != 0)
			r = -1;
		else if (config->nfn != 1)
			ft_putstr(STDOUT_FILENO, "\n");
		++k;
	}
	return (r);
}
