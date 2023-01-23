/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:28:09 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/20 15:45:32 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c_strncpy.h"

int	main(void)
{
	char	*src;
	char	dest[7];
	char	destt[7];

	src = "123456";
	printf("%s\nft_strncpy : %s\nstrncpy : %s", src, ft_strncpy(dest, src, 5),
		strncpy(destt, src, 5));
	return (0);
}
