/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:36:44 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 13:39:50 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strncmp.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("strncmp(%s, %s, 5) == %i\n", argv[1], argv[2],
		ft_strncmp(argv[1], argv[2], 5));
	return (0);
}
