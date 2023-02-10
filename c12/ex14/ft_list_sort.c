/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:33:18 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 23:38:39 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*l;
	void	*buf;

	if (*begin_list == NULL)
		return ;
	l = *begin_list;
	while (l->next != NULL)
	{
		if ((*cmp)(l->data, l->next->data) > 0)
		{
			buf = l->data;
			l->data = l->next->data;
			l->next->data = buf;
			l = *begin_list;
		}
		else
			l = l->next;
	}
}
