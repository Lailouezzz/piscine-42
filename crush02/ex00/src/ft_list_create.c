/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:39:01 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 19:41:04 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_listentry	*ft_listentry_create(void)
{
	t_listentry	*le;

	le = malloc(sizeof(*le));
	le->after = NULL;
	le->before = NULL;
	le->entry = NULL;
	return (le);
}

t_list	*ft_list_create(t_listentry *entry)
{
	t_list	*l;

	l = malloc(sizeof(*l));
	while (entry->before != NULL)
		entry = entry->before;
	l->begin = entry;
	while (entry->after != NULL)
		entry = entry->after;
	l->end = entry;
	return (l);
}

/*t_list	*ft_list_create(void)
{
	t_list	*l;

	l = malloc(sizeof(*l));
	l->begin = NULL;
	l->end = NULL;
	return (l);
}*/
