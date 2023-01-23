/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:31:52 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 17:44:54 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strlcpy.h"

int	main(int argc, char **argv)
{
	char			deststrft[10];
	unsigned int	ret;

	if (argc != 2)
		return (0);
	ret = ft_strlcpy(deststrft, argv[1], 10);
	printf("ft_strlcpy : %s | %u\n", deststrft, ret);
	return (0);
}
