/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:23:57 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 16:26:23 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s != '\0')
	{
		write(STDOUT_FILENO, s, 1);
		++s;
	}
}

int	main(int argc, char **argv)
{
	int	k;

	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putstr("\n");
		++k;
	}
	return (0);
}
