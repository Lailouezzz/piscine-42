/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_show_tab.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:23:49 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/27 15:26:37 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  C_SHOW_TAB_H
# define C_SHOW_TAB_H
# include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

#endif
