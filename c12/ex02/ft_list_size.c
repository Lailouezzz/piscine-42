/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:05:41 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 21:07:00 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	k;

	k = 0;
	while (begin_list != NULL)
	{
		++k;
		begin_list = begin_list->next;
	}
	return (k);
}
