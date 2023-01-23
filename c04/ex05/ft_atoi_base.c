/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <alanlebouder@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:37:43 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 23:50:37 by ale-boud         ###   ########.fr       */
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

int	ft_in_base(char c, char *base)
{
	int	k;

	k = 0;
	while (base[k] != '\0')
	{
		if (base[k] == c)
			return (k);
		++k;
	}
	return (-1);
}

int	ft_strlen(char *s)
{
	int	k;

	k = 0;
	while (*s != '\0')
	{
		++s;
		++k;
	}
	return (k);
}

int	ft_valid_base(char *s)
{
	int	k;
	int	i;

	if (ft_strlen(s) <= 1)
		return (0);
	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] == '+' || s[k] == '-')
			return (0);
		i = 0;
		while (s[i] != '\0')
		{
			if (k != i && s[i] == s[k])
				return (0);
			++i;
		}
		++k;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	nbr;
	int				sign;

	if (!ft_valid_base(base))
		return (0);
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
	while (ft_in_base(*str, base) >= 0 && *str != '\0')
	{
		nbr *= ft_strlen(base);
		nbr += ft_in_base(*str, base);
		++str;
	}
	return ((int)nbr * sign);
}
