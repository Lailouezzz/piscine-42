/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:13:26 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/27 14:15:56 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_split.h"

void	print_char_tab(char **tab)
{
	if (*tab == NULL)
	{
		printf("(null)");
		return ;
	}
	printf("[\"%s\"", tab[0]);
	++tab;
	while (*tab != NULL)
	{
		printf(", \"%s\"", *tab);
		++tab;
	}
	printf("]");
}

int	main(int argc, char **argv)
{
	char	**stab;

	if (argc != 3)
		return (EXIT_FAILURE);
	stab = ft_split(argv[1], argv[2]);
	printf("ft_split(\"%s\", \"%s\") == ", argv[1], argv[2]);
	print_char_tab(stab);
	printf("\n");
	return (EXIT_SUCCESS);
}
