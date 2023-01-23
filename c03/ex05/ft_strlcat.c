/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:54:35 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 16:37:43 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;

	if (size == 0)
		return (0);
	k = 0;
	while (*dest != '\0' && k < size - 1)
	{
		++dest;
		++k;
	}
	while (*src != '\0' && k < size - 1)
	{
		*dest = *src;
		++dest;
		++src;
		++k;
	}
	while (*src != '\0')
	{
		++src;
		++k;
	}
	*dest = '\0';
	return (k);
}
