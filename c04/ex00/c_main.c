/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:28:54 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 22:31:41 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strlen.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_strlen(\"%s\") == %i\n", argv[1], ft_strlen(argv[1]));
	return (0);
}
