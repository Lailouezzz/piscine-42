/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:37:03 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 00:39:44 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_recursive_power.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%i^%i == %i\n", atoi(argv[1]), atoi(argv[2]),
		ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
