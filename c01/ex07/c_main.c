/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:09:17 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 13:30:06 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_rev_int_tab.h"

int	main(void)
{
	int	tab[29];
	int	k;

	k = 0;
	while (k < (int)(sizeof(tab) / sizeof(*tab)))
	{
		tab[k] = k;
		++k;
	}
	k = 0;
	while (k < (int)(sizeof(tab) / sizeof(*tab)))
	{
		printf("%i ", tab[k]);
		++k;
	}
	ft_rev_int_tab(tab, sizeof(tab) / sizeof(*tab));
	printf("\n");
	k = 0;
	while (k < (int)(sizeof(tab) / sizeof(*tab)))
	{
		printf("%i ", tab[k]);
		++k;
	}
	return (0);
}
