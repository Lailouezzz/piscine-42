/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:19:22 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/06 22:27:39 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

void	ft_putnbr_aux(unsigned int nb)
{
	char	buf;

	if (nb == 0)
	{
		return ;
	}
	ft_putnbr_aux(nb / 10);
	buf = nb % 10 + '0';
	write(STDOUT_FILENO, &buf, 1);
}

void	ft_putnbr(int nb)
{
	char	buf;

	if (nb == 0)
	{
		buf = '0';
		write(STDOUT_FILENO, &buf, 1);
		return ;
	}
	else if (nb < 0)
	{
		buf = '-';
		write(STDOUT_FILENO, &buf, 1);
		nb = -nb;
	}
	ft_putnbr_aux(nb);
}
