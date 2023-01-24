/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:41:09 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 14:42:53 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_find_next_prime.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_find_next_prime(%i) == %i\n", atoi(argv[1]),
		ft_find_next_prime(atoi(argv[1])));
	return (0);
}
