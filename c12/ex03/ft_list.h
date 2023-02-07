/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:48:35 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/07 21:09:07 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_LIST_H
# define FT_LIST_H

typedef struct s_list {
	struct s_list	*next;
	void			*data;
}	t_list;

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data);

int		ft_list_size(t_list *begin_list);

t_list	*ft_list_last(t_list *begin_list);

#endif
