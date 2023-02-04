/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_biggestentry.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:17:11 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 18:44:41 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dictentry	*ft_dict_biggestentry(t_dict *dict, unsigned int nbr)
{
	size_t	k;

	k = dict->len;
	while (k != 0)
	{
		--k;
		if (dict->entries[k].key <= nbr)
			return (&dict->entries[k]);
	}
	return (NULL);
}
