/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:20:36 by scarpent          #+#    #+#             */
/*   Updated: 2023/02/04 16:58:01 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	ft_dict_check(const t_dict *dict)
{
	unsigned int	i;
	size_t			k;

	i = 0;
	k = 0;
	while (i <= 1000000000)
	{
		if (dict->entries[k].key != i || k >= dict->len)
			return (0);
		if (i >= 1000)
			i *= 1000;
		else if (i >= 100)
			i *= 10;
		else if (i >= 20)
			i += 10;
		else
			++i;
		++k;
	}
	return (1);
}
