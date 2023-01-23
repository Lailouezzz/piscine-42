/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:51:37 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/20 15:53:25 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strlowcase.h"

int	main(void)
{
	char	str[7];

	str[0] = 'T';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 't';
	str[4] = 'A';
	str[5] = 'Z';
	str[6] = '\0';
	printf("%s : ", str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
