/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:09:09 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 13:22:27 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	sq;

	sq = 0;
	while (sq * sq <= nb)
	{
		if (sq * sq == nb)
			return (sq);
		++sq;
	}
	return (0);
}
