/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:26:05 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/18 19:49:12 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(char a, char b, char c)
{
	write (STDOUT_FILENO, &a, 1);
	write (STDOUT_FILENO, &b, 1);
	write (STDOUT_FILENO, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 1;
	c = 2;
	ft_write_comb(a + '0', b + '0', c + '0');
	while (a != 7 || b != 8 || c != 9)
	{
		if (c == 9)
		{
			++b;
			if (b == 9)
			{
				++a;
				b = a + 1;
			}
			c = b;
		}
		++c;
		write(STDOUT_FILENO, ", ", 2);
		ft_write_comb(a + '0', b + '0', c + '0');
	}
}
