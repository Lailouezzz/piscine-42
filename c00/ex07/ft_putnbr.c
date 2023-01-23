/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:54 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/18 19:59:09 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
