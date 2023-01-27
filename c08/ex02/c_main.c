/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:52:54 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/27 14:54:56 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_abs.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (EXIT_FAILURE);
	printf("%i\n", ABS(atoi(argv[1])));
	return (EXIT_SUCCESS);
}
