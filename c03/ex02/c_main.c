/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:09:43 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 14:14:32 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c_strcat.h"

int	main(int argc, char **argv)
{
	char	s1[10];
	char	s2[10];

	if (argc != 3)
		return (0);
	strncpy(s1, argv[1], 4);
	strncpy(s2, argv[2], 4);
	printf("%s cat %s = ", s1, s2);
	printf("%s\n", ft_strcat(s1, s2));
	return (0);
}
