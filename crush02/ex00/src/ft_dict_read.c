/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:21:07 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 01:43:22 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dictentry	ft_entry_str(char *s)
{
	t_dictentry	entry;
	char		*ts;

	if (ft_atoip(s, &entry.key) != 0)
	{
		entry.s = NULL;
		return (entry);
	}
	s = ft_skip_if(s, ft_isdigit);
	s = ft_skip_if(s, ft_isspace);
	ts = ft_skip_if(s, ft_istpoint);
	if (ts - s != 1)
	{
		entry.s = NULL;
		return (entry);
	}
	s = ts;
	entry.s = ft_strdup_if(ft_skip_if(s, ft_isspace), ft_isprintable);
	s = ft_skip_if(s, ft_isprintable);
	if (*s != '\0' && *s != '\n')
	{
		free(entry.s);
		entry.s = NULL;
	}
	return (entry);
}

t_dict	*ft_dict_read(int fd)
{
	t_dict		*dict;
	t_dictentry	entry;
	char		*l;

	l = ft_getline(fd);
	if (l == NULL)
		return (NULL);
	dict = ft_dict_create();
	while (l != NULL)
	{
		entry = ft_entry_str(l);
		if (entry.s == NULL)
		{
			free(l);
			ft_dict_free(dict);
			return (NULL);
		}
		ft_dict_addentry(dict, entry);
		free(l);
		l = ft_getline(fd);
	}
	ft_dict_sort(dict);
	if (!ft_dict_check(dict))
		return (ft_dict_free(dict));
	return (dict);
}

int	ft_isnl(char c)
{
	return (c == '\n');
}

t_dict	*ft_dict_read_from_str(char *str)
{
	t_dict		*dict;
	t_dictentry	entry;
	char		*l;

	l = ft_skip_if(str, ft_isnl);
	dict = ft_dict_create();
	while (*l != 0x00)
	{
		entry = ft_entry_str(l);
		if (entry.s == NULL)
		{
			ft_dict_free(dict);
			return (NULL);
		}
		ft_dict_addentry(dict, entry);
		l = ft_skip_if(l, ft_isprintable);
		l = ft_skip_if(l, ft_isnl);
	}
	ft_dict_sort(dict);
	if (!ft_dict_check(dict))
		return (ft_dict_free(dict));
	return (dict);
}
