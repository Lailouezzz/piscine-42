/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:24:03 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/27 14:51:28 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef char	t_bool;
# define TRUE 1
# define FALSE 0
# define EVEN(x) ((x % 2) == 0 ? TRUE : FALSE)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif
