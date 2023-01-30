/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sky.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:18:41 by ale-boud          #+#    #+#             */
/*   Updated: 2023/01/29 21:40:17 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_SKY_H
# define FT_SKY_H
# include <unistd.h>
# include <stdlib.h>

# define TAB_SIZE 4
# define AT(x, y) ((x) + ((y) * TAB_SIZE))

typedef struct s_sky_ctx
{
	int	coll_up[TAB_SIZE];
	int	coll_down[TAB_SIZE];
	int	row_left[TAB_SIZE];
	int	row_right[TAB_SIZE];
}	t_sky_ctx;

typedef char	t_sky_possibility;
# define SET_POSSIBLE(p, n) ((p) |= (0x01) << ((n) - 1))
# define CLEAR_POSSIBLE(p, n) ((p) &= ~((0x01) << ((n) - 1)))
# define ALL_POSSIBLE ((0x01 << TAB_SIZE) - 1)
# define ALL_POSSIBLE_BELOW(n) ((0x01 << (n - 1)) - 1)
# define ALL_POSSIBLE_ABOVE(n) ((((0x01 << (TAB_SIZE - n)) - 1) << n))
# define IS_POSSIBLE(p, n) (((p) & (0x01 << ((n) - 1))) != 0)
# define POSSIBLE(n) ((0x01 << ((n) - 1)))

typedef char	*t_sky_map;

/* return : pointer to a t_sky_ctx
 * 			initialized with str in the format of the subject 
 * 			NULL if str is not in the good format or badalloc */
t_sky_ctx			*ft_create_ctx(char *str);
/* return : pointer to a t_sky_map initialized at 0 reserved by malloc 
 * 			NULL if badalloc */
t_sky_map			ft_create_map(void);
/* return : write to fd the map */
void				ft_print_map(t_sky_map map, int fd);
/* return : 0 if map is invalid
 * 			1 if the map is valid but contain 0
 * 			2 if the map is valid without 0 */
int					ft_sky_isvalid(t_sky_ctx *ctx, t_sky_map map);
/* return : TODO spec */
int					ft_sky_resolve(t_sky_ctx *ctx, t_sky_map map);

#endif
