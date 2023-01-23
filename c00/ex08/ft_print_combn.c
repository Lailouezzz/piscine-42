/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:15:18 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 09:55:41 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_combn(char nb[], int n)
{
	int		k;
	char	buf;

	k = n;
	while (k > 0)
	{
		--k;
		buf = nb[k] + '0';
		write(STDOUT_FILENO, &buf, 1);
	}
}

void	ft_inc_tab(char nb[], int n)
{
	int		k;

	++nb[0];
	k = 0;
	while (k < n - 1)
	{
		if (nb[k] == 10 - k)
		{
			++nb[k + 1];
		}
		++k;
	}
	while (k > 0)
	{
		--k;
		if (nb[k] == 10 - k)
		{
			nb[k] = nb[k + 1] + 1;
		}
	}
}

void	ft_print_combn(int n)
{
	int		k;
	char	nb[10];

	nb[n - 1] = 0;
	k = n - 1;
	while (k > 0)
	{
		--k;
		nb[k] = nb[k + 1] + 1;
	}
	ft_write_combn(nb, n);
	while (nb[n - 1] != 10 - n)
	{
		ft_inc_tab(nb, n);
		write(STDOUT_FILENO, ", ", 2);
		ft_write_combn(nb, n);
	}
}
