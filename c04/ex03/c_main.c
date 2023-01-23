/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:05:14 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 23:08:30 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_atoi.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("ft_atoi(\"%s\") == %i\n", argv[1], ft_atoi(argv[1]));
	printf("atoi(\"%s\") == %i\n", argv[1], atoi(argv[1]));
	return (0);
}
