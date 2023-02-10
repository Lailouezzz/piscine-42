/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:00:35 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 13:34:02 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

const t_operation	g_operations[FT_OPERATIONS_NB] = {
{"+", "addition", ft_op_add, 1},
{"-", "substraction", ft_op_sub, 1},
{"/", "division", ft_op_div, 0},
{"*", "multiplication", ft_op_mul, 1},
{"%", "modulo", ft_op_mod, 0},
};

int	ft_op_add(int a, int b)
{
	return (a + b);
}

int	ft_op_sub(int a, int b)
{
	return (a - b);
}

int	ft_op_div(int a, int b)
{
	return (a / b);
}

int	ft_op_mul(int a, int b)
{
	return (a * b);
}

int	ft_op_mod(int a, int b)
{
	return (a % b);
}
