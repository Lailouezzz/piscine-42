/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:09:26 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/08 01:02:26 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

t_list	*_ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (begin_list);
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*l;

	l = ft_create_elem(data);
	if (l != NULL)
	{
		if (*begin_list != NULL)
			_ft_list_last(*begin_list)->next = l;
		else
			*begin_list = l;
	}
}
