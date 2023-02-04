/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:41:09 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 18:43:16 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_free(t_list *list)
{
	t_listentry	*it;
	t_listentry	*tofree;

	it = list->begin;
	while (it != NULL)
	{
		tofree = it;
		it = it->after;
		free(tofree);
	}
	free(list);
}
