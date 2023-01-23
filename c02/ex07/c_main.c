/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:35:30 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/20 15:52:38 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strupcase.h"

int	main(void)
{
	char	str[7];

	str[0] = 'T';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 't';
	str[4] = 'a';
	str[5] = 'z';
	str[6] = '\0';
	printf("%s : ", str);
	printf("%s\n", ft_strupcase(str));
	return (0);
}
