/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:49:02 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 12:55:50 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dict	*ft_dict_create(void)
{
	t_dict	*p;

	p = malloc(sizeof(*p));
	p->entries = malloc(sizeof(*p->entries));
	p->allocl = 1;
	p->len = 0;
	return (p);
}
