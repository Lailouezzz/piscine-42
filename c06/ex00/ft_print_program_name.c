/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:18:54 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 16:22:41 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s;

	(void)argc;
	s = argv[0];
	while (*s != '\0')
	{
		write(STDOUT_FILENO, s, 1);
		++s;
	}
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
