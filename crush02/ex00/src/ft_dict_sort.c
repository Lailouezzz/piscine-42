/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:11:35 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 23:19:23 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_dictentrycmp(t_dictentry i1, t_dictentry i2)
{
	return (i1.key - i2.key);
}

void	ft_swap(t_dictentry *a, t_dictentry *b)
{
	t_dictentry	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	quicksort_part(t_dictentry *tab, int size, int pivot)
{
	int	k;
	int	p;

	ft_swap(&tab[pivot], &tab[size - 1]);
	pivot = size - 1;
	k = 0;
	p = 0;
	while (k < size)
	{
		if (ft_dictentrycmp(tab[k], tab[pivot]) < 0)
		{
			ft_swap(&tab[k], &tab[p]);
			++p;
		}
		++k;
	}
	ft_swap(&tab[pivot], &tab[p]);
	return (p);
}

void	ft_dict_sort_aux(t_dictentry *tab, int size)
{
	int	pivot;

	if (size != 0)
	{
		pivot = quicksort_part(tab, size, size - 1);
		ft_dict_sort_aux(tab, pivot);
		ft_dict_sort_aux(tab + pivot + 1, size - pivot - 1);
	}
}

void	ft_dict_sort(t_dict *dict)
{
	ft_dict_sort_aux(dict->entries, dict->len);
}
