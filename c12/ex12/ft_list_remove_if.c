/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:34:27 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 23:22:22 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_elem(t_list **begin_list, t_list *prev,
	void (*free_fct)(void *))
{
	t_list	*tofree;

	if (*begin_list == NULL)
		return ;
	if (free_fct != NULL)
		((*free_fct)((*begin_list)->data));
	if (prev != NULL)
		prev->next = (*begin_list)->next;
	tofree = *begin_list;
	*begin_list = (*begin_list)->next;
	free(tofree);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
	void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*l;

	if (*begin_list == NULL)
		return ;
	prev = NULL;
	l = *begin_list;
	while (l != NULL)
	{
		if ((*cmp)(data_ref, l->data) == 0)
		{
			ft_list_remove_elem(&l, prev, free_fct);
			if (prev == NULL)
				*begin_list = l;
		}
		else
		{
			prev = l;
			l = l->next;
		}
	}
}
