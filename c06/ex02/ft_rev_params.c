/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:27:15 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 16:31:16 by ale-boud         ###   ########.fr       */
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

	k = argc - 1;
	while (k >= 1)
	{
		ft_putstr(argv[k]);
		ft_putstr("\n");
		--k;
	}
	return (0);
}
