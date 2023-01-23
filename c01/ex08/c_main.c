/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:22:59 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 14:30:17 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "c_sort_int_tab.h"

int	main(void)
{
	int	tab[9];
	int	k;

	srand((int)time(NULL));
	k = 0;
	while (k < (int)(sizeof(tab) / sizeof(*tab)))
	{
		tab[k] = rand() % 1000;
		++k;
	}
	k = 0;
	while (k < (int)(sizeof(tab) / sizeof(*tab)))
	{
		printf("%i ", tab[k]);
		++k;
	}
	ft_sort_int_tab(tab, sizeof(tab) / sizeof(*tab));
	printf("\n");
	k = 0;
	while (k < (int)(sizeof(tab) / sizeof(*tab)))
	{
		printf("%i ", tab[k]);
		++k;
	}
	return (0);
}
