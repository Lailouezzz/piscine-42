/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:25:51 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 21:40:50 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tofree;

	if (begin_list == NULL)
		return ;
	tofree = begin_list;
	while (tofree != NULL)
	{
		begin_list = tofree;
		if (free_fct != NULL)
			free_fct(tofree->data);
		tofree = tofree->next;
		free(begin_list);
	}
}
