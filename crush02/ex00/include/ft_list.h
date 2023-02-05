/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:32:14 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/04 22:57:22 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_LIST_H
# define FT_LIST_H

# include "ft.h"

typedef struct s_listentry
{
	t_dictentry			*entry;
	struct s_listentry	*before;
	struct s_listentry	*after;
}	t_listentry;

typedef struct s_list
{
	t_listentry	*begin;
	t_listentry	*end;
}	t_list;

/* List */

t_listentry	*ft_listentry_create(void);

/* fuck free */

/* push(after/before)
 *		return : pointer to the new entry before or after lentry 
 *					if lentry is NULL create a new entry*/
t_listentry	*ft_listentry_pushafter(t_listentry *lentry, t_dictentry *entry);

t_listentry	*ft_listentry_pushbefore(t_listentry *lentry, t_dictentry *entry);

/* push the t_listentry LIST in between of srcle and before srcle */
void		ft_listentry_pushbefore_le(t_listentry *dstle, t_listentry *srcle);

/* return : empty list mallocated */
/*t_list		*ft_list_create(void);*/
t_list		*ft_list_create(t_listentry *entry);

/* free the entire list */
void		ft_list_free(t_list *list);

#endif
