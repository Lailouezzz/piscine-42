/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:36:50 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 22:45:44 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_aux(unsigned int nb)
{
	char	c;

	if (nb == 0)
		return ;
	ft_putnbr_aux(nb / 10);
	c = nb % 10 + '0';
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbabs;

	if (nb == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		nbabs = -nb;
	}
	else
	{
		nbabs = nb;
	}
	ft_putnbr_aux(nbabs);
}
