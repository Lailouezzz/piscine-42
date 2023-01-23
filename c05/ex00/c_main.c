/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:12:57 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 00:15:15 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_iterative_factorial.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%i! == %i\n", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
