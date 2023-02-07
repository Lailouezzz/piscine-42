/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:39:28 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 19:21:36 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_swap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	tabsize;
	int	k;

	tabsize = 0;
	while (tab[tabsize] != NULL)
		++tabsize;
	k = 0;
	while (k < tabsize - 1)
	{
		if (cmp(tab[k], tab[k + 1]) > 0)
		{
			ft_swap(&tab[k], &tab[k + 1]);
			k = 0;
		}
		else
			++k;
	}
}
