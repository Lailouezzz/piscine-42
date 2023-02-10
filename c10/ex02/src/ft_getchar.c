/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:27:28 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 16:50:42 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_tail.h"

/* return : -1 if EOF or error | the char */
int	ft_getchar(int fd)
{
	char	c;
	ssize_t	r;

	r = read(fd, &c, 1);
	if (r != 1)
		return (-1);
	return ((int)c);
}
