/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:57:46 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/03 01:18:00 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	k;
	int	croiss;
	int	decroiss;

	croiss = 1;
	k = 1;
	while (k < length)
	{
		if (f(tab[k - 1], tab[k]) > 0)
			croiss = 0;
		++k;
	}
	decroiss = 1;
	k = 1;
	while (k < length)
	{
		if (f(tab[k - 1], tab[k]) < 0)
			decroiss = 0;
		++k;
	}
	if (decroiss == 1 || croiss == 1)
		return (1);
	return (0);
}
