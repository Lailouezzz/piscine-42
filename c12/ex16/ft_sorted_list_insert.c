/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:55:55 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/08 17:10:33 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;

	if (*begin_list != NULL && (*cmp)(data, (*begin_list)->data) <= 0)
	{
		elem = ft_create_elem(data);
		if (elem == NULL)
			return ;
		elem->next = *begin_list;
		(*begin_list) = elem;
	}
	else
	{
		ft_sorted_list_insert(&(*begin_list)->next, data, cmp);
	}
}
