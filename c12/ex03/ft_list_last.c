/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:07:38 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 21:08:51 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (begin_list);
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}
