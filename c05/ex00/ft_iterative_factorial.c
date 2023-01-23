/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:09:37 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/24 00:17:31 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	k;
	int	result;

	if (nb < 0)
		return (0);
	k = 1;
	result = 1;
	while (k < nb)
	{
		++k;
		result *= k;
	}
	return (result);
}
