/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:06:36 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 16:43:52 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char d)
{
	char	c;

	c = (d & 0xF0) >> 4;
	if (c >= 10)
		c = c + 'a' - 10;
	else
		c = c + '0';
	write(STDOUT_FILENO, &c, 1);
	c = d & 0x0F;
	if (c >= 10)
		c = c + 'a' - 10;
	else
		c = c + '0';
	write(STDOUT_FILENO, &c, 1);
}

void	print_addr(void *addr)
{
	char			*d;
	unsigned int	k;

	d = (char *)&addr;
	d += sizeof(addr) - 1;
	k = 0;
	while (k < sizeof(addr))
	{
		print_hex(*d);
		++k;
		--d;
	}
}

void	print_data(void *addr, unsigned int size)
{
	char			*p;
	unsigned int	k;

	p = (char *)addr;
	k = 0;
	while (k < size)
	{
		if (k % 2 == 0)
			write(STDOUT_FILENO, " ", 1);
		print_hex(*p);
		++p;
		++k;
	}
	while (k < 0x10)
	{
		if (k % 2 == 0)
			write(STDOUT_FILENO, " ", 1);
		write(STDOUT_FILENO, "  ", 2);
		++k;
	}
}

void	print_data_readable(void *addr, unsigned int size)
{
	char			*p;
	unsigned int	k;

	p = (char *)addr;
	k = 0;
	while (k < size)
	{
		if (*p >= 0x20 && *p <= 0x7E)
			write(STDOUT_FILENO, p, 1);
		else
			write(STDOUT_FILENO, ".", 1);
		++p;
		++k;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*p;

	p = (char *)addr;
	if (size == 0)
	{
		return (addr);
	}
	while (p <= (char *)addr + size - 0x10)
	{
		print_addr(p);
		write(STDOUT_FILENO, ":", 1);
		print_data(p, 0x10);
		write(STDOUT_FILENO, " ", 1);
		print_data_readable(p, 0x10);
		write(STDOUT_FILENO, "\n", 1);
		p += 0x10;
	}
	print_addr(p);
	write(STDOUT_FILENO, ":", 1);
	print_data(p, size - (p - (char *)addr));
	write(STDOUT_FILENO, " ", 1);
	print_data_readable(p, size - (p - (char *)addr));
	write(STDOUT_FILENO, "\n", 1);
	return (addr);
}
