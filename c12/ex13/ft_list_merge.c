/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:26:05 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 23:27:53 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*it;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	it = *begin_list1;
	while (it->next != NULL)
	{
		it = it->next;
	}
	it->next = begin_list2;
}
