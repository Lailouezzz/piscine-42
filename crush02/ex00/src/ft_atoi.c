/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:05:43 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 23:06:55 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned int	ft_atoi(char *str)
{
	unsigned int	n;

	n = 0;
	while (ft_isdigit(*str))
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	return (n);
}

int	ft_atoip(char *str, unsigned int *i)
{
	unsigned int	n;
	unsigned int	o;

	n = 0;
	while (ft_isdigit(*str))
	{
		o = n;
		n *= 10;
		if (n / 10 != o)
			return (-1);
		n += *str - '0';
		++str;
	}
	*i = n;
	return (0);
}
