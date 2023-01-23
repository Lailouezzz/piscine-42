/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:33:32 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 16:43:11 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	return (c >= 0x20 && c <= 0x7E);
}

/* c must be into range [0; 15] */
char	to_hex(char c)
{
	if (c >= 10)
	{
		return (c + 'a' - 10);
	}
	else
	{
		return (c + '0');
	}
}

void	print_non_printable(char c)
{
	char	b;

	write(STDOUT_FILENO, "\\", 1);
	b = to_hex(c >> 4);
	write(STDOUT_FILENO, &b, 1);
	b = to_hex(c & 0x0F);
	write(STDOUT_FILENO, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (!is_printable(*str))
		{
			print_non_printable(*str);
		}
		else
		{
			write(STDOUT_FILENO, str, 1);
		}
		++str;
	}
}
