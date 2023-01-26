/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:13:05 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/25 17:27:28 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	k;
	int	*tab;

	if (max <= min)
		return (NULL);
	n = max - min;
	tab = malloc(n * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	k = 0;
	while (min < max)
	{
		tab[k] = min;
		++min;
		++k;
	}
	return (tab);
}
