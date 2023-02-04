/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_get_entry.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:02:12 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 17:26:43 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dictentry	*ft_dict_get_entry(t_dict *dict, unsigned int key)
{
	size_t	k;

	while (k < dict->len)
	{
		if (dict->entries[k].key == key)
			return (&dict->entries[k]);
		++k;
	}
	return (NULL);
}
