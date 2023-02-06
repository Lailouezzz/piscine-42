/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:10:18 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/06 22:13:21 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	unsigned int	nbr;
	int				sign;

	sign = 1;
	while ((*str == '+' || *str == '-') && *str != '\0')
	{
		if (*str == '-')
			sign = -sign;
		++str;
	}
	nbr = 0;
	while (ft_is_numeric(*str) && *str != '\0')
	{
		nbr *= 10;
		nbr += (*str - '0');
		++str;
	}
	return ((int)nbr * sign);
}
