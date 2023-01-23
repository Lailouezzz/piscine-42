/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:47:34 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 23:11:49 by ale-boud         ###   ########.fr       */
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
	unsigned int	nbr;
	int				sign;

	while (ft_isspace(*str) && *str != '\0')
		++str;
	sign = 1;
	while ((*str == '+' || *str == '-') && *str != '\0')
	{
		if (*str == '-')
			sign = -sign;
		++str;
	}
	nbr = 0;
	while (ft_is_numeric(*str) && *str != '\0')
	{
		nbr *= 10;
		nbr += (*str - '0');
		++str;
	}
	return ((int)nbr * sign);
}
