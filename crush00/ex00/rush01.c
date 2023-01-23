/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:57:30 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/21 13:07:44 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int	xk;
	int	yk;

	yk = 1;
	while (yk <= y && x >= 1)
	{
		xk = 1;
		while (xk <= x)
		{
			if ((yk == 1 && xk == 1)
				|| (yk == y && xk == x && x != 1 && y != 1))
				ft_putchar('/');
			else if ((yk == 1 && xk == x) || (yk == y && xk == 1))
				ft_putchar('\\');
			else if ((yk == 1 || yk == y) || (xk == 1 || xk == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			++xk;
		}
		ft_putchar('\n');
		++yk;
	}
}
