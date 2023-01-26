/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:06:50 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/26 21:24:25 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s);

int	ft_valid_base(char *s);

int	ft_atoi_base(char *str, char *base);

char	*ft_strcpy(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (p);
}

void	ft_strnbr_base_aux(unsigned int nbr, char *base, char **str)
{
	char	*s;

	if (nbr == 0)
		return ;
	ft_strnbr_base_aux(nbr / ft_strlen(base), base, str);
	s = malloc((ft_strlen(*str) + 2) * sizeof(*s));
	ft_strcpy(s, *str);
	s[ft_strlen(s) + 1] = '\0';
	s[ft_strlen(s)] = base[nbr % ft_strlen(base)];
	free(*str);
	*str = s;
}

char	*ft_malloc_str(unsigned int n)
{
	char			*s;
	unsigned int	k;

	s = malloc((1 + n) * sizeof(*s));
	k = 0;
	while (k < n)
	{
		s[k] = '\0';
		++k;
	}
	return (s);
}

char	*ft_strnbr_base(int nbr, char *base)
{
	unsigned int	nbrabs;
	char			*s;

	if (!ft_valid_base(base))
		return (NULL);
	if (nbr == 0)
	{
		s = ft_malloc_str(1);
		*s = *base;
		return (s);
	}
	if (nbr < 0)
	{
		s = malloc(2 * sizeof(*s));
		*s = '-';
		s[1] = '\0';
		nbrabs = -nbr;
	}
	else
	{
		nbrabs = nbr;
		s = ft_malloc_str(0);
	}
	ft_strnbr_base_aux(nbrabs, base, &s);
	return (s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	if (!ft_valid_base(base_from) || !ft_valid_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	return (ft_strnbr_base(nb, base_to));
}
