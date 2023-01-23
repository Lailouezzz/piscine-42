/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:17:31 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 23:10:12 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_str_is_lowercase.h"

int	main(void)
{
	char	*str;

	str = "test alpha qbcdefghijklmnopqrstuvwxyz";
	printf("%i", ft_str_is_lowercase(str));
	str = "abcde";
	printf("%i", ft_str_is_lowercase(str));
	str = "";
	printf("%i", ft_str_is_lowercase(str));
	str = "Jffdsfsd yo JJ";
	printf("%i", ft_str_is_lowercase(str));
	return (0);
}
