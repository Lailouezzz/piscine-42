/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:24:53 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 14:28:33 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c_strncat.h"

int	main(int argc, char **argv)
{
	char	s1[10];

	if (argc != 3)
		return (0);
	strcpy(s1, argv[1]);
	printf("%s cat %s (max %u) = ", s1, argv[2], 5);
	printf("%s", ft_strncat(s1, argv[2], 5));
	return (0);
}
