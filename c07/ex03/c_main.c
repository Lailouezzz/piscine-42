/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:12:01 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/26 19:37:20 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strjoin.h"

void	print_char_tab(char **tab, int n)
{
	int	k;

	if (n == 0)
	{
		printf("[]");
		return ;
	}
	printf("[\"%s\"", tab[0]);
	k = 1;
	while (k < n)
	{
		printf(", \"%s\"", tab[k]);
		++k;
	}
	printf("]");
}

int	main(int argc, char **argv)
{
	char	*s;

	if (argc <= 1)
		return (EXIT_FAILURE);
	s = ft_strjoin(argc - 2, &argv[2], argv[1]);
	printf("ft_strjoin(%i, ", argc - 2);
	print_char_tab(&argv[2], argc - 2);
	printf(", \"%s\") == \"%s\"\n", argv[1], s);
	free(s);
	return (EXIT_SUCCESS);
}
