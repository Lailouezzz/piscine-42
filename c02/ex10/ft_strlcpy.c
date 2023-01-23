/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:18:07 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 15:34:30 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;

	if (size == 0)
		return (0);
	k = 0;
	while (k < size - 1 && *src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
		++k;
	}
	while (*src != '\0')
	{
		++k;
		++src;
	}
	*dest = '\0';
	return (k);
}
