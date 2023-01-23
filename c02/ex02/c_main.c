/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:17:31 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/23 01:00:34 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c_str_is_alpha.h"

int	main(void)
{
	char	*str;

	str = "testalphaqbcdefghijklmnopqrstuvwxyz";
	printf("%s : %i\n", str, ft_str_is_alpha(str));
	str = "";
	printf("%s : %i\n", str, ft_str_is_alpha(str));
	str = "Je suis";
	printf("%s : %i\n", str, ft_str_is_alpha(str));
	str = "\t";
	printf("%s : %i\n", str, ft_str_is_alpha(str));
	return (0);
}
