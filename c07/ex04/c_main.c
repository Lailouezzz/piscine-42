/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:30:28 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/26 21:25:11 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_convert_base.h"

int	main(int argc, char **argv)
{
	char	*s;

	if (argc <= 3)
		return (EXIT_FAILURE);
	s = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("ft_convert_base(\"%s\", \"%s\", \"%s\") == \"%s\"\n",
		argv[1], argv[2], argv[3], s);
	free(s);
	return (EXIT_SUCCESS);
}
