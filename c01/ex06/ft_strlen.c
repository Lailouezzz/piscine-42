/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:47:20 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 12:49:23 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (*str != '\0')
	{
		++k;
		++str;
	}
	return (k);
}
