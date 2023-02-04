/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:06:06 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 20:39:58 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

t_listentry	*ft_dict_itoa_aux(t_dict *dict, unsigned int nbr, t_listentry *le)
{
	t_dictentry	*e;

	while (nbr != 0)
	{
		e = ft_dict_biggestentry(dict, nbr);
		if (e->key >= 100)
		{
			le = ft_listentry_pushafter(le, e);
			ft_listentry_pushbefore_le(
				le, ft_dict_itoa_aux(dict, nbr / e->key, NULL));
			nbr %= e->key;
		}
		else
		{
			le = ft_listentry_pushafter(le, e);
			return (ft_dict_itoa_aux(dict, nbr - e->key, le));
		}
	}
	return (le);
}

char	*ft_dict_itoa(t_dict *dict, unsigned int nbr)
{
	t_list		*l;
	t_listentry	*le;

	l = ft_list_create(ft_dict_itoa_aux(dict, nbr, NULL));
	le = l->begin;
	while (le != NULL)
	{
		printf("%s ", le->entry->s);
		le = le->after;
	}
	return (NULL);
}
