/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:05:05 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 18:22:15 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_DICT_H
# define FT_DICT_H

# include "ft.h"

extern const unsigned char	g_defaultdict[];
extern const unsigned int	g_defaultdict_len;

# define FT_DICT_KEY_MAX 1000000000

typedef struct s_dictentry
{
	unsigned int	key;
	char			*s;
}	t_dictentry;

typedef struct s_dict
{
	t_dictentry	*entries;
	size_t		len;
	size_t		allocl;
}	t_dict;

/* return : NULL if error in parsing or read operation or dict check error
 * 		else t_dict pointer is returned and entries are sorted
 * 	ft_dict_read did not close fd for you !!!
 * 	AND don't try to call ft_dict_read if fd == -1 */
t_dict		*ft_dict_read(int fd);
t_dict		*ft_dict_read_from_str(char *str);

/* return : pointer to a t_dict malloced and initialized */
t_dict		*ft_dict_create(void);

/* return : always NULL to brain the fu**ing norminette
 *		free all allocated memory in dict */
void		*ft_dict_free(t_dict *dict);

/* return : add entry to a dict */
void		ft_dict_addentry(t_dict *dict, t_dictentry entry);

/* return : -1 if error with the dict or number
 * 		or 0 if all right
 * 			write to STDOUT_FILENO the number in alphabetic*/
int			ft_dict_print_nbr(t_dict *dict, unsigned int nbr);

/* return : NULL if the key does not exist
 *		or pointer to the associated entry */
t_dictentry	*ft_dict_get_entry(t_dict *dict, unsigned int key);

/* return : 1 if dict is GOOOOOOD
 * 		0 if dict is KO x((((((*/
int			ft_dict_check(const t_dict *dict);

/* sort the dict->entries list */
void		ft_dict_sort(t_dict *dict);

/* return : NULL if you s*ck :)
 * 		or the entry of the biggest key before nbr */
t_dictentry	*ft_dict_biggestentry(t_dict *dict, unsigned int nbr);

#endif
