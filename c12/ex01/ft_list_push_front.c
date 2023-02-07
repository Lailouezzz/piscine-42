/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:58:55 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 21:03:45 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*l;

	l = ft_create_elem(data);
	if (l != NULL)
	{
		l->next = *begin_list;
		if (*begin_list != NULL)
			*begin_list = l;
	}
}
