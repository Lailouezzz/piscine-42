/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:42:00 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 23:54:24 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

t_list	*ft_list_at2(t_list *begin_list, unsigned int nbr)
{
	unsigned int	k;

	k = 0;
	while (k < nbr && begin_list != NULL)
	{
		begin_list = begin_list->next;
		++k;
	}
	return (begin_list);
}

int	ft_list_size2(t_list *begin_list)
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

void	ft_list_reverse_fun(t_list *begin_list)
{
	unsigned int	k;
	unsigned int	lsize;
	void			*buf;
	void			*buf2;

	lsize = ft_list_size2(begin_list);
	k = 0;
	while (k < lsize / 2)
	{
		buf = ft_list_at2(begin_list, k)->data;
		buf2 = ft_list_at2(begin_list, lsize - k - 1)->data;
		ft_list_at2(begin_list, lsize - k - 1)->data = buf;
		ft_list_at2(begin_list, k)->data = buf2;
		++k;
	}
}
