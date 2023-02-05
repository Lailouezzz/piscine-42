/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:51:11 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 00:50:27 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "ft_dict.h"
# include "ft_list.h"

/* Misc */

/* realloc */
void			*ft_realloc(void *src, size_t size, size_t newsize);

/* put str to fd */
void			ft_putstr(int fd, char *s);

/* return : -1 if EOF or error | the char */
int				ft_getchar(int fd);

/* return : string allocated by malloc of the line in fd */
char			*ft_getline(int fd);

/* return : the integer in str */
unsigned int	ft_atoi(char *str);

/* return : -1 if overflow 0 if str can be encoded in a unsigned int */
int				ft_atoip(char *str, unsigned int *i);

/* return : the next char in str where f(*str) == 0 */
char			*ft_skip_if(char *str, int (*f)(char));

/* return : string mallocated in the first char where f(*str) == 0 */
char			*ft_strdup_if(char *str, int (*f)(char));
char			*ft_strdup(char *str);

/* ft_is* */

int				ft_isdigit(char c);
int				ft_isprintable(char c);
int				ft_istpoint(char c);
int				ft_isspace(char c);

#endif
