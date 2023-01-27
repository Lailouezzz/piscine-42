/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:35:44 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/25 17:39:28 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_ultimate_range.h"

void	print_int_tab(int *tab, int n)
{
	int	k;

	if (n == 0)
	{
		printf("[]");
		return ;
	}
	printf("[%i", tab[0]);
	k = 1;
	while (k < n)
	{
		printf(", %i", tab[k]);
		++k;
	}
	printf("]");
}

int	main(int argc, char **argv)
{
	int	*tab;
	int	n;

	if (argc != 3)
		return (EXIT_FAILURE);
	n = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	if (tab == NULL || n <= 0)
	{
		printf("ft_ultimate_range(%s, %s) == %i | range == %p\n",
			argv[1], argv[2], n, tab);
	}
	else
	{
		printf("ft_ultimate_range(%s, %s) == %i | range == ",
			argv[1], argv[2], n);
		print_int_tab(tab, n);
		printf("\n");
	}
	free(tab);
	return (EXIT_SUCCESS);
}
