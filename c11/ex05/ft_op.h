/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:53:23 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/06 22:27:20 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_OP_H
# define FT_OP_H

# include <stddef.h>
# include <unistd.h>

typedef int					(*t_op_f)(int,int);

typedef struct s_operation
{
	const char		*id;
	const char		*name;
	t_op_f			f;
	int				z;
}							t_operation;

# define FT_OPERATIONS_NB 5

extern const t_operation	g_operations[FT_OPERATIONS_NB];

const t_operation	*ft_op_get(char *id);

int					ft_op_add(int a, int b);
int					ft_op_sub(int a, int b);
int					ft_op_div(int a, int b);
int					ft_op_mul(int a, int b);
int					ft_op_mod(int a, int b);

int					ft_strcmp(const char *s1, const char *s2);
int					ft_atoi(char *s);
void				ft_putstr(const char *s);
void				ft_putnbr(int nb);

#endif
