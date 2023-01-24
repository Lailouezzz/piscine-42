/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:05:14 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 13:07:09 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_fibonacci.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("F(%i) == %i\n", atoi(argv[1]), ft_fibonacci(atoi(argv[1])));
	return (0);
}
