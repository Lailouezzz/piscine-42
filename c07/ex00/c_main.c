/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:09:56 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/25 17:12:30 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strdup.h"

int	main(int argc, char **argv)
{
	char	*cstr;

	if (argc != 2)
		return (EXIT_FAILURE);
	cstr = ft_strdup(argv[1]);
	if (cstr == NULL)
		return (EXIT_FAILURE);
	printf("\"%s\" == \"%s\"\n", argv[1], cstr);
	free(cstr);
	return (EXIT_SUCCESS);
}
