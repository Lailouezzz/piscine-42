/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:13:39 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 23:29:42 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	k;

	k = 0;
	while (*s != '\0')
	{
		++s;
		++k;
	}
	return (k);
}

int	ft_valid_base(char *s)
{
	int	k;
	int	i;

	if (ft_strlen(s) <= 1)
		return (0);
	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] == '+' || s[k] == '-')
			return (0);
		i = 0;
		while (s[i] != '\0')
		{
			if (k != i && s[i] == s[k])
				return (0);
			++i;
		}
		++k;
	}
	return (1);
}

void	ft_putnbr_base_aux(unsigned int nbr, char *base)
{
	if (nbr == 0)
		return ;
	ft_putnbr_base_aux(nbr / ft_strlen(base), base);
	write(STDOUT_FILENO, &base[nbr % ft_strlen(base)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbrabs;

	if (!ft_valid_base(base))
		return ;
	if (nbr == 0)
	{
		write(STDOUT_FILENO, base, 1);
		return ;
	}
	if (nbr < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		nbrabs = -nbr;
	}
	else
	{
		nbrabs = nbr;
	}
	ft_putnbr_base_aux(nbrabs, base);
}
