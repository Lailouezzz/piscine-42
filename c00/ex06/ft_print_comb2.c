/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:08:18 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/18 19:59:07 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb2(char a, char b)
{
	char	buf;

	buf = a / 10 + '0';
	write(STDOUT_FILENO, &buf, 1);
	buf = a % 10 + '0';
	write(STDOUT_FILENO, &buf, 1);
	buf = ' ';
	write(STDOUT_FILENO, &buf, 1);
	buf = b / 10 + '0';
	write(STDOUT_FILENO, &buf, 1);
	buf = b % 10 + '0';
	write(STDOUT_FILENO, &buf, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 1;
	ft_write_comb2(a, b);
	while (a != 98 || b != 99)
	{
		++b;
		if (b == 100)
		{
			++a;
			b = a + 1;
		}
		write(STDOUT_FILENO, ", ", 2);
		ft_write_comb2(a, b);
	}
}
