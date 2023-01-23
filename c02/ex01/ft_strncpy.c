/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:10:45 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 21:57:37 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	k;
	char			*p;

	p = dest;
	k = 0;
	while (k < n)
	{
		*dest = *src;
		if (*src != '\0')
		{
			++src;
		}
		++dest;
		++k;
	}
	return (p);
}
