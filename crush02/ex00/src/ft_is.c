/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:18:06 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 13:17:16 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isprintable(char c)
{
	return (c >= 0x20 && c <= 0x7E);
}

int	ft_istpoint(char c)
{
	return (c == ':');
}

int	ft_isspace(char c)
{
	return (c == ' ');
}
