/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:21:07 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 13:53:28 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dictentry	ft_entry_str(char *s)
{
	t_dictentry	entry;

	entry.key = ft_atoi(s);
	s = ft_skip_if(s, ft_isdigit);
	s = ft_skip_if(s, ft_isspace);
	s = ft_skip_if(s, ft_istpoint);
	s = ft_skip_if(s, ft_isspace);
	entry.s = ft_strdup_if(s, ft_isprintable);
	s = ft_skip_if(s, ft_isprintable);
	if (*s != '\0')
		entry.s = NULL;
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
			ft_dict_free(dict);
			return (NULL);
		}
		ft_dict_addentry(dict, entry);
		free(l);
		l = ft_getline(fd);
	}
	return (dict);
}
