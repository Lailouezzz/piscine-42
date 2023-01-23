/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:01:14 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 17:53:20 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_strlcat.h"

int	main(void)
{
	char			s1[15];
	char			*s2;
	unsigned int	r;
	int rr[10];

	s1[0] = 'c';
	s1[1] = 'o';
	s1[2] = 'n';
	s1[3] = 'c';
	s1[4] = '\0';
	s2 = "at";
	r = ft_strlcat(s1, s2, 5);
	printf("%s : %u\n", s1, r);
	return (0);
}
