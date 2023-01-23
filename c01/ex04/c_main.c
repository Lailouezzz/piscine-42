/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:11:51 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 12:18:20 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_ultimate_div_mod.h"

int	main(void)
{
	int	a;
	int	b;

	a = 789;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%i %i", a, b);
	return (0);
}
