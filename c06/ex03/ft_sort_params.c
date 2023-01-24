/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:32:43 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 16:51:54 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_sort_str_tab(char **tab, int size)
{
	int	pivot;

	if (size != 0)
	{
		pivot = quicksort_part(tab, size, size - 1);
		ft_sort_str_tab(tab, pivot);
		ft_sort_str_tab(tab + pivot + 1, size - pivot - 1);
	}
}

int	main(int argc, char **argv)
{
	int	k;

	ft_sort_str_tab(argv + 1, argc - 1);
	k = 1;
	while (k < argc)
	{
		while (*argv[k] != '\0')
		{
			write(STDOUT_FILENO, argv[k], 1);
			++argv[k];
		}
		write(STDOUT_FILENO, "\n", 1);
		++k;
	}
	return (0);
}
