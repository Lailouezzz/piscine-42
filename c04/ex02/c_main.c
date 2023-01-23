/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:43:38 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 22:45:14 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "c_putnbr.h"

int	main(void)
{
	ft_putnbr(0);
	ft_putnbr(-1);
	ft_putnbr(1);
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
	ft_putnbr(42);
	return (0);
}
