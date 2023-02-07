/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:20:45 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 21:45:07 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*l;
	t_list	*begin_list;
	int		k;

	if (size == 0 || *strs == NULL)
		return (NULL);
	begin_list = NULL;
	k = 0;
	while (k < size)
	{
		l = ft_create_elem(strs[k]);
		if (l != NULL)
		{
			l->next = begin_list;
			begin_list = l;
		}
		else
			return (begin_list);
		++k;
	}
	return (begin_list);
}
