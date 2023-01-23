/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:56:18 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/20 17:09:05 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_alphanum(char c)
{
	return ((c >= 0x30 && c <= 0x39)
		|| (c >= 0x41 && c <= 0x5A)
		|| (c >= 0x61 && c <= 0x7A));
}

/* return : str if the word at str is alphanum; str+1 if it's not a word;
 * NULL if reached \0  */
/*char	*is_word_alphanum(char *str)
{
	if (!is_char_alphanum(*str))
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		else
		{
			return (++str);
		}
	}
	if (is_char_alphanum(*(str + 1)))
	{
		return (str);
	}
	else
	{
		return (str + 1);
	}
}*/

char	cupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c + 'A' - 'a');
	return (c);
}

char	clowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}

/* return : char *after the word or next char if it's not a char */
char	*capitalize(char *str)
{
	if (!is_char_alphanum(*str))
	{
		return (++str);
	}
	*str = cupcase(*str);
	++str;
	while (is_char_alphanum(*str))
	{
		*str = clowcase(*str);
		++str;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*p;

	p = str;
	while (*str != '\0')
	{
		str = capitalize(str);
	}
	return (p);
}
