/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:18:46 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/25 17:28:06 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_range.h"

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
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (tab == NULL)
	{
		printf("ft_range(%s, %s) == NULL\n", argv[1], argv[2]);
	}
	else
	{
		n = atoi(argv[2]) - atoi(argv[1]);
		printf("ft_range(%s, %s) == ", argv[1], argv[2]);
		print_int_tab(tab, n);
		printf("\n");
	}
	free(tab);
	return (EXIT_SUCCESS);
}
