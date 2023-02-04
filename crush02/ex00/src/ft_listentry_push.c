/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listentry_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:54:59 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 20:28:00 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_listentry	*ft_listentry_pushafter(t_listentry *lentry, t_dictentry *entry)
{
	t_listentry	*le;
	t_listentry	*after;

	le = ft_listentry_create();
	le->entry = entry;
	if (lentry == NULL)
		return (le);
	after = lentry->after;
	le->after = after;
	le->before = lentry;
	if (after != NULL)
		after->before = le;
	lentry->after = le;
	return (le);
}

t_listentry	*ft_listentry_pushbefore(t_listentry *lentry, t_dictentry *entry)
{
	t_listentry	*le;
	t_listentry	*before;

	le = ft_listentry_create();
	le->entry = entry;
	if (lentry == NULL)
		return (le);
	before = lentry->before;
	le->before = before;
	le->after = lentry;
	if (before != NULL)
		before->after = le;
	lentry->before = le;
	return (le);
}

void	ft_listentry_pushbefore_le(t_listentry *dstle, t_listentry *srcle)
{
	t_listentry	*it;
	t_listentry	*before;

	if (srcle == NULL)
		return ;
	it = srcle;
	while (it->after != NULL)
		it = it->after;
	it->after = dstle;
	before = dstle->before;
	if (dstle != NULL)
		dstle->before = it;
	while (it->before != NULL)
		it = it->before;
	if (before != NULL)
		before->after = it;
	it->before = before;
}
