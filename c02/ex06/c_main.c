/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:35:30 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 23:44:45 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_str_is_printable.h"

int	main(void)
{
	char	*str;

	str = "test ddsjfndsj [](&&^$^#^^%%&*(*";
	printf("%s : %i\n", str, ft_str_is_printable(str));
	str = "test retour\nligne";
	printf("%s : %i\n", str, ft_str_is_printable(str));
	str = "";
	printf("%s : %i\n", str, ft_str_is_printable(str));
	str = "\n";
	printf("%s : %i\n", str, ft_str_is_printable(str));
	return (0);
}
