/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:47:34 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/02 02:02:38 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	k;

	k = 0;
	nbr = 0;
	while (ft_is_numeric(*str) && *str != '\0')
	{
		++k;
		nbr *= 10;
		nbr += (*str - '0');
		++str;
	}
	if (k == 0)
		return (-1);
	return (nbr);
}
