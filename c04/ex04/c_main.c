/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:31:50 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 23:36:39 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "c_putnbr_base.h"

int	main(void)
{
	ft_putnbr_base(1024, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(0x0EADC00C, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(89, "poneyvif");
	printf("\n");
	ft_putnbr_base(255, "01");
	printf("\n");
	ft_putnbr_base(255, "0");
	ft_putnbr_base(255, "");
	ft_putnbr_base(255, "01234516789");
	ft_putnbr_base(255, "0123456789+");
	return (0);
}
