/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:12:51 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/09 16:43:35 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_TAIL_H
# define FT_TAIL_H

typedef struct s_config {
	char			**fns;
	char			*pn;
	int				nfn;
	unsigned int	c;
}	t_config;

void			ft_tail_print(int fd);
void			ft_tail_print_header(char *fn);
t_config		*ft_tail_config_create(int argc, char **argv);
void			*ft_tail_config_free(t_config *config);
int				ft_tail_process(t_config *config);
void			ft_tail_invalid_bytes(char *pn, char *bytes);
void			ft_tail_read_err(char *pn, char *fn, char *serr);

/* Misc */

void			ft_memcpy(void *dst, void *src, unsigned int size);
int				ft_getchar(int fd);
void			ft_putstr(int fd, char *str);
int				ft_strlen(char *str);
char			*ft_strdup(char *str);
char			*ft_skip_if(char *str, int (*f)(char));

int				ft_stris(char *str, int (*f)(char));

int				ft_isdigit(char c);

unsigned int	ft_atoui(char *str);

#endif
