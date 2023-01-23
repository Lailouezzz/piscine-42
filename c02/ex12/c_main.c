/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:20:53 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 13:10:39 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_print_memory.h"

int	main(void)
{
	char	data[0x11];

	printf("Print data at %p, on %zu\n", data, sizeof(data) * sizeof(*data));
	ft_print_memory(data, sizeof(data) * sizeof(*data));
	return (0);
}
