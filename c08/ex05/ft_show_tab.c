/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:14:35 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/27 15:37:56 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include "ft_stock_str.h"

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

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putstr("\n");
		ft_putnbr(par->size);
		ft_putstr("\n");
		ft_putstr(par->copy);
		ft_putstr("\n");
		++par;
	}
}
