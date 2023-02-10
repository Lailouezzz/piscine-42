/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:09:23 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 16:06:37 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_tail.h"

char	*ft_strdup(char *str)
{
	char	*d;
	int		k;

	d = malloc(ft_strlen(str) + 1);
	if (d == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
	{
		d[k] = str[k];
		++k;
	}
	d[k] = '\0';
	return (d);
}
