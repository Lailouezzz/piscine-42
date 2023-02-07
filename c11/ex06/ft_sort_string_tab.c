/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:39:28 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/06 22:42:46 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\n')
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

int	quicksort_part(char **tab, int size, int pivot)
{
	int	k;
	int	p;

	ft_swap(&tab[pivot], &tab[size - 1]);
	pivot = size - 1;
	k = 0;
	p = 0;
	while (k < size)
	{
		if (ft_strcmp(tab[k], tab[pivot]) < 0)
		{
			ft_swap(&tab[k], &tab[p]);
			++p;
		}
		++k;
	}
	ft_swap(&tab[pivot], &tab[p]);
	return (p);
}

void	ft_sort_string_tab_aux(char **tab, int size)
{
	int	pivot;

	if (size != 0)
	{
		pivot = quicksort_part(tab, size, size - 1);
		ft_sort_string_tab_aux(tab, pivot);
		ft_sort_string_tab_aux(tab + pivot + 1, size - pivot - 1);
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	k;

	k = 0;
	while (tab[k] != NULL)
		++k;
	ft_sort_string_tab_aux(tab, k);
}
