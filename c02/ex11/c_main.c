/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:46:29 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 18:15:56 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "c_putstr_non_printable.h"

int	main(void)
{
	char	str[25];

	strcpy(str, "test\nretour ligne\ttab\\\nl");
	str[1] = 0x14;
	ft_putstr_non_printable("ejrjinjiwfauihfdauihiwvbevuibv\t\t\t\t\t\t\t\t\n");
	return (0);
}
