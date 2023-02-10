/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:16:20 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/08 01:02:36 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

void	ft_sorted_list_insert2(t_list **begin_list, t_list *elem, int (*cmp)())
{
	if (*begin_list != NULL && (*cmp)(elem->data, (*begin_list)->data) <= 0)
	{
		elem->next = *begin_list;
		(*begin_list) = elem;
	}
	else
	{
		ft_sorted_list_insert2(&(*begin_list)->next, elem, cmp);
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
	int (*cmp)())
{
	t_list	*next;

	next = begin_list2;
	while (next != NULL)
	{
		next = begin_list2->next;
		ft_sorted_list_insert2(begin_list1, begin_list2, cmp);
		begin_list2 = next;
	}
}
