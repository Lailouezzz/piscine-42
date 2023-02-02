/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:30:08 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/02 22:39:50 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_foreach.h"

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

void	putnbr(int nb)
{
	printf("%d\n", nb);
}

int	main(int argc, char **argv)
{
	int	*tab;

	tab = strs_to_int_tab(argv + 1, (argc - 1));
	if (tab == NULL)
		return (EXIT_FAILURE);
	ft_foreach(tab, argc - 1, putnbr);
	free(tab);
	return (EXIT_SUCCESS);
}
