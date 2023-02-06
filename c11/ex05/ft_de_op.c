/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_de_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:40:46 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/06 22:26:56 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

int	except_divbyz(const char *name)
{
	ft_putstr("Stop : ");
	ft_putstr(name);
	ft_putstr(" by zero\n");
	return (0);
}

int	main(int argc, char **argv)
{
	const t_operation	*op;
	int					a;
	int					b;

	if (argc != 4)
		return (0);
	op = ft_op_get(argv[2]);
	if (op == NULL)
	{
		ft_putstr("0\n");
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (op->z == 0 && b == 0)
		return (except_divbyz(op->name));
	ft_putnbr(op->f(a, b));
	ft_putstr("\n");
	return (0);
}
