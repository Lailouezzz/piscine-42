/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_ctx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:12:10 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 16:34:40 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sky.h"
#include <stddef.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_ctx_correct(char *str)
{
	int	i;

	if (ft_strlen(str) % 2 == 0 || (ft_strlen(str) / 2) + 1 != TAB_SIZE * 4)
		return (0);
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '9')
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	ft_fill_sky_ctx(t_sky_ctx *sky_ctx, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (j < TAB_SIZE)
				sky_ctx->coll_up[j] = str[i] - '0';
			else if (j < TAB_SIZE * 2)
				sky_ctx->coll_down[j - TAB_SIZE] = str[i] - '0';
			else if (j < TAB_SIZE * 3)
				sky_ctx->row_left[j - (TAB_SIZE * 2)] = str[i] - '0';
			else
				sky_ctx->row_right[j - (TAB_SIZE * 3)] = str[i] - '0';
			j++;
		}
		i++;
	}
}

t_sky_ctx	*ft_create_ctx(char *str)
{
	t_sky_ctx	*sky_ctx;

	if (!ft_is_ctx_correct(str))
		return (NULL);
	sky_ctx = (t_sky_ctx *) malloc(sizeof(t_sky_ctx));
	if (sky_ctx == NULL)
		return (NULL);
	ft_fill_sky_ctx(sky_ctx, str);
	return (sky_ctx);
}
