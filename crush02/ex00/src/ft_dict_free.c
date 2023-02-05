/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:47:33 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 01:44:17 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_dict_free(t_dict *dict)
{
	size_t	k;

	if (dict == NULL)
		return (NULL);
	k = 0;
	while (k < dict->len)
	{
		free(dict->entries[k].s);
		++k;
	}
	free(dict->entries);
	free(dict);
	return (NULL);
}
