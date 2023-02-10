/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:22:43 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 16:52:05 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_tail.h"

int	main(int argc, char **argv)
{
	t_config	*config;

	config = ft_tail_config_create(argc, argv);
	if (config == NULL)
		return (EXIT_FAILURE);
	ft_tail_process(config);
	ft_tail_config_free(config);
	return (EXIT_SUCCESS);
}
