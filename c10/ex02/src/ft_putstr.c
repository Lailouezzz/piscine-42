/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:00:32 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 16:01:25 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_tail.h"

void	ft_putstr(int fd, char *str)
{
	while (*str != '\0')
	{
		write(fd, str, 1);
		++str;
	}
}
