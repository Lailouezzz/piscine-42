/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:50:45 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 23:54:10 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_atoi_base.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("ft_atoi_base(\"%s\", \"%s\") == %i\n", argv[1], argv[2],
		ft_atoi_base(argv[1], argv[2]));
	return (0);
}
