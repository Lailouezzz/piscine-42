/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:51:23 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 11:51:33 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_realloc(void *src, size_t size, size_t newsize)
{
	void	*dst;
	size_t	k;

	dst = malloc(newsize);
	k = 0;
	while (k < size)
	{
		((char *)dst)[k] = ((char *)src)[k];
		++k;
	}
	return (dst);
}
