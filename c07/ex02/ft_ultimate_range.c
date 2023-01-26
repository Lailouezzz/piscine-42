/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:28:33 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/25 17:37:41 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	k;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	n = max - min;
	*range = malloc(n * sizeof(**range));
	if (*range == NULL)
		return (-1);
	k = 0;
	while (min < max)
	{
		(*range)[k] = min;
		++min;
		++k;
	}
	return (k);
}
