/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:04:37 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 12:07:37 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_div_mod.h"

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(789, 10, &div, &mod);
	printf("789 / 10 = %i\n789 %% 10 = %i", div, mod);
	return (0);
}
