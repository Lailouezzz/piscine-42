/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:43:43 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 16:44:35 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_memcpy(void *dst, void *src, unsigned int size)
{
	while (size != 0)
	{
		*(char *)dst = *(char *)src;
		--dst;
		--src;
		--size;
	}
}
