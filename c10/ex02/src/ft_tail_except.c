/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_except.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:01:49 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 16:26:55 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_tail.h"

void	ft_tail_invalid_bytes(char *pn, char *bytes)
{
	ft_putstr(STDERR_FILENO, pn);
	ft_putstr(STDERR_FILENO, ": invalid number of bytes: '");
	ft_putstr(STDERR_FILENO, bytes);
	ft_putstr(STDERR_FILENO, "'\n");
}

void	ft_tail_read_err(char *pn, char *fn, char *serr)
{
	ft_putstr(STDERR_FILENO, pn);
	ft_putstr(STDERR_FILENO, ": cannot open '");
	ft_putstr(STDERR_FILENO, fn);
	ft_putstr(STDERR_FILENO, "' for reading: ");
	ft_putstr(STDERR_FILENO, serr);
	ft_putstr(STDERR_FILENO, "\n");
}
