/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:17:31 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 22:58:08 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_str_is_numeric.h"

int	main(void)
{
	char	*str;

	str = "test alpha qbcdefghijklmnopqrstuvwxyz";
	printf("%i", ft_str_is_numeric(str));
	str = "0123456789";
	printf("%i", ft_str_is_numeric(str));
	str = "";
	printf("%i", ft_str_is_numeric(str));
	str = "0123456789/";
	printf("%i", ft_str_is_numeric(str));
	return (0);
}
