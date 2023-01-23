/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:23:13 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 15:44:08 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c_strcmp.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%s == %s ? %i\n", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
	printf("%s == %s ? %i\n", argv[1], argv[2], strcmp(argv[1], argv[2]));
	return (0);
}
