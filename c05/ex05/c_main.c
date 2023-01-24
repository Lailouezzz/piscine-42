/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:18:32 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 13:21:16 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_sqrt.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_sqrt(%i) == %i\n", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
	return (0);
}
