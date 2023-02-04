/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:01:27 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/03 01:30:41 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_map.h"

int	*strs_to_int_tab(char **strs, int length)
{
	int	*tab;
	int	k;

	tab = malloc(length * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	k = 0;
	while (k < length)
	{
		tab[k] = atoi(strs[k]);
		++k;
	}
	return (tab);
}

void	print_int_tab(int *tab, int length)
{
	int	k;

	if (tab == NULL)
	{
		printf("(null)");
		return ;
	}
	if (length == 0)
	{
		printf("[]");
		return ;
	}
	printf("[%d", tab[0]);
	k = 1;
	while (k < length)
	{
		printf(", %d", tab[k]);
		++k;
	}
	printf("]");
}

int	add5(int nb)
{
	return (nb + 5);
}

int	main(int argc, char **argv)
{
	int	*tab;
	int	*ntab;

	tab = strs_to_int_tab(argv + 1, argc - 1);
	if (tab == NULL)
		return (EXIT_FAILURE);
	print_int_tab(tab, argc - 1);
	printf("\n");
	ntab = ft_map(tab, argc - 1, &add5);
	if (ntab == NULL)
		return (EXIT_FAILURE);
	print_int_tab(ntab, argc - 1);
	free(ntab);
	free(tab);
	return (EXIT_SUCCESS);
}
