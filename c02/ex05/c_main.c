/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:17:31 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 23:16:08 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_str_is_uppercase.h"

int	main(void)
{
	char	*str;

	str = "test alpha qbcdefgFFFijklmnopqrstuvwxyz";
	printf("%i", ft_str_is_uppercase(str));
	str = "ABCDE";
	printf("%i", ft_str_is_uppercase(str));
	str = "";
	printf("%i", ft_str_is_uppercase(str));
	str = "Jffdsfsd yo JJ";
	printf("%i", ft_str_is_uppercase(str));
	return (0);
}
