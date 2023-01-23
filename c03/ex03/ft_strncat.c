/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:15:29 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 14:29:36 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	while (*dest != '\0')
		++dest;
	while (*src != '\0' && nb != 0)
	{
		*dest = *src;
		++dest;
		++src;
		--nb;
	}
	*dest = '\0';
	return (p);
}