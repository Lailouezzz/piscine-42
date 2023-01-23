/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:41:55 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 14:46:49 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c_strstr.h"

int	main(int argc, char **argv)
{
	char	*r;

	if (argc != 3)
		return (0);
	r = ft_strstr(argv[1], argv[2]);
	printf("%s is in %s ? %i (%s)\n", argv[2], argv[1], r != NULL, r);
	r = strstr(argv[1], argv[2]);
	printf("%s is in %s ? %i (%s)\n", argv[2], argv[1], r != NULL, r);
	return (0);
}
