/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:04:04 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/06 22:29:40 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

const t_operation	*ft_op_get(char *id)
{
	size_t	k;

	k = 0;
	while (k < sizeof(g_operations) / sizeof(*g_operations))
	{
		if (ft_strcmp(id, g_operations[k].id) == 0)
			return (&g_operations[k]);
		++k;
	}
	return (NULL);
}
