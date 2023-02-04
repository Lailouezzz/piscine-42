/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_addentry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:56:04 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 13:41:09 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_dict_addentry(t_dict *dict, t_dictentry entry)
{
	if (dict->len >= dict->allocl)
	{
		dict->entries = ft_realloc(dict->entries,
				dict->allocl * sizeof(*dict->entries),
				dict->allocl * 2 * sizeof(*dict->entries));
		dict->allocl *= 2;
	}
	dict->entries[dict->len] = entry;
	++dict->len;
}
