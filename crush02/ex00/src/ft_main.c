/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:11:10 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 19:55:39 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int	main(int argc, char **argv)
{
	t_dict	*dict;
	int		fd;

	(void)(argc);
	(void)(argv);
	fd = open("numbers.dict", O_RDONLY);
	dict = ft_dict_read(fd);
	if (ft_dict_check(dict) == 0)
	{
		printf("ERROR VIKTIM BOLOSS\n");
		return (EXIT_FAILURE);
	}
	ft_dict_itoa(dict, atoi(argv[1]));
	printf("%p\n", dict);
	return (EXIT_SUCCESS);
}
