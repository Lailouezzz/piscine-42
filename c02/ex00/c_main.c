/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:58:11 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/19 21:10:03 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strcpy.h"

int	main(void)
{
	char	*src;
	char	dest[40];

	src = "Test de copie";
	printf("%s\n%s", src, ft_strcpy(dest, src));
	return (0);
}
