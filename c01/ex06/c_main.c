/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:57:52 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 13:03:08 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strlen.h"

int	main(void)
{
	printf("%i\n", ft_strlen("12345678"));
	printf("%i\n", ft_strlen(""));
	printf("%i\n", ft_strlen("1"));
	return (0);
}
