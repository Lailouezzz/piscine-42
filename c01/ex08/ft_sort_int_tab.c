/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:47:30 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 14:25:07 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	quicksort_part(int *tab, int size, int pivot)
{
	int	k;
	int	p;

	ft_swap(&tab[pivot], &tab[size - 1]);
	pivot = size - 1;
	k = 0;
	p = 0;
	while (k < size)
	{
		if (tab[k] < tab[pivot])
		{
			ft_swap(&tab[k], &tab[p]);
			++p;
		}
		++k;
	}
	ft_swap(&tab[pivot], &tab[p]);
	return (p);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	pivot;

	if (size != 0)
	{
		pivot = quicksort_part(tab, size, size - 1);
		ft_sort_int_tab(tab, pivot);
		ft_sort_int_tab(tab + pivot + 1, size - pivot - 1);
	}
}
