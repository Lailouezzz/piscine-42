/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:21:28 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/03 00:54:31 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	k;
	int	n;

	k = 0;
	n = 0;
	while (k < length)
	{
		if (f(tab[k]) != 0)
			++n;
		++k;
	}
	return (n);
}
