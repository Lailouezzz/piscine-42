/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:05:29 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 01:05:43 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define DUP_MAX 80

char	*ft_strdup_if(char *str, int (*f)(char))
{
	char	*s;
	int		k;

	s = malloc(DUP_MAX * sizeof(*s));
	k = 0;
	while (f(str[k]) && str[k] != '\0' && k < DUP_MAX - 1)
	{
		s[k] = str[k];
		++k;
	}
	s[k] = '\0';
	return (s);
}

char	*ft_strdup(char *str)
{
	char	*s;
	int		k;

	s = malloc(DUP_MAX * sizeof(*s));
	k = 0;
	while (str[k] != '\0' && k < DUP_MAX - 1)
	{
		s[k] = str[k];
		++k;
	}
	s[k] = '\0';
	return (s);
}
