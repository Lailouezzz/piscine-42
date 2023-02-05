/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_print_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:06:06 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 01:09:02 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_listentry	*ft_dict_print_nbr_aux(t_dict *dict, unsigned int nbr,
	t_listentry *le)
{
	t_dictentry	*e;

	while (nbr != 0)
	{
		e = ft_dict_biggestentry(dict, nbr);
		if (e->key >= 100)
		{
			le = ft_listentry_pushafter(le, e);
			ft_listentry_pushbefore_le(
				le, ft_dict_print_nbr_aux(dict, nbr / e->key, NULL));
			nbr %= e->key;
		}
		else
		{
			le = ft_listentry_pushafter(le, e);
			return (ft_dict_print_nbr_aux(dict, nbr - e->key, le));
		}
	}
	return (le);
}

int	ft_dict_print_nbr(t_dict *dict, unsigned int nbr)
{
	t_list		*l;
	t_listentry	*it;

	if (nbr == 0)
	{
		ft_putstr(STDOUT_FILENO, dict->entries[0].s);
		ft_putstr(STDOUT_FILENO, "\n");
		return (0);
	}
	l = ft_list_create(ft_dict_print_nbr_aux(dict, nbr, NULL));
	if (l == NULL)
		return (-1);
	it = l->begin;
	ft_putstr(STDOUT_FILENO, it->entry->s);
	it = it->after;
	while (it != NULL)
	{
		ft_putstr(STDOUT_FILENO, " ");
		ft_putstr(STDOUT_FILENO, it->entry->s);
		it = it->after;
	}
	ft_list_free(l);
	ft_putstr(STDOUT_FILENO, "\n");
	return (0);
}
