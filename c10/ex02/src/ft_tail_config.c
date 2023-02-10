/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_config.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:18:07 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 17:08:26 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_tail.h"

int	ft_tail_is_stdin(char *fn)
{
	return ((fn[0] == '-' && fn[1] == '\0')
		|| (fn[0] == '-' && fn[1] == '-' && fn[2] == '\0'));
}

/* -1 if error or the offset of the first fn */
int	ft_tail_config_parse_c(t_config *config, int argc, char **argv)
{
	if (argc >= 2 && argv[1][0] == '-' && argv[1][1] == 'c'
		&& argv[1][2] != '\0')
	{
		if (!ft_stris(argv[1] + 2, ft_isdigit))
		{
			ft_tail_invalid_bytes(argv[0], argv[1] + 2);
			return (-1);
		}
		config->c = ft_atoui(argv[1] + 2);
		return (2);
	}
	if (argc >= 3 && argv[1][0] == '-' && argv[1][1] == 'c')
	{
		if (!ft_stris(argv[2], ft_isdigit) || argv[2][0] == '\0')
		{
			ft_tail_invalid_bytes(argv[0], argv[2]);
			return (-1);
		}
		config->c = ft_atoui(argv[2]);
		return (3);
	}
	return (-1);
}

/* -1 if error 0 good */
int	ft_tail_config_parse_fns(t_config *config, int argc, char **argv)
{
	int	k;
	int	stdin;

	stdin = 0;
	config->nfn = 0;
	if (argc != 0)
		config->fns = malloc(argc * sizeof(*config->fns));
	k = 0;
	while (k < argc)
	{
		if (ft_tail_is_stdin(argv[k]) && stdin == 0)
		{
			config->fns[config->nfn] = NULL;
			stdin = 1;
			++config->nfn;
		}
		else if (!ft_tail_is_stdin(argv[k]))
		{
			config->fns[config->nfn] = ft_strdup(argv[k]);
			++config->nfn;
		}
		++k;
	}
	return (0);
}

t_config	*ft_tail_config_create(int argc, char **argv)
{
	t_config	*config;
	int			fnoff;

	config = malloc(sizeof(*config));
	if (config == NULL)
		return (NULL);
	config->fns = NULL;
	config->nfn = 0;
	config->c = 0;
	config->pn = argv[0];
	fnoff = ft_tail_config_parse_c(config, argc, argv);
	if (fnoff == -1
		|| ft_tail_config_parse_fns(config, argc - fnoff, argv + fnoff) != 0)
		return (ft_tail_config_free(config));
	return (config);
}

void	*ft_tail_config_free(t_config *config)
{
	int	k;

	if (config == NULL)
		return (NULL);
	if (config->fns != NULL)
	{
		k = 0;
		while (k < config->nfn)
		{
			free(config->fns[k]);
			++k;
		}
		free(config->fns);
	}
	free(config);
	return (NULL);
}
