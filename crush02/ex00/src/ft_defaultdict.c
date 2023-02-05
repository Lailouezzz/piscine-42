/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defaultdict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:53:23 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 02:10:09 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

const unsigned char	g_defaultdict[] = {
	0x30, 0x3a, 0x20, 0x7a, 0x65, 0x72, 0x6f, 0x0a, 0x31, 0x3a, 0x20, 0x6f,
	0x6e, 0x65, 0x0a, 0x32, 0x3a, 0x20, 0x74, 0x77, 0x6f, 0x0a, 0x33, 0x3a,
	0x20, 0x74, 0x68, 0x72, 0x65, 0x65, 0x0a, 0x34, 0x3a, 0x20, 0x66, 0x6f,
	0x75, 0x72, 0x0a, 0x35, 0x3a, 0x20, 0x66, 0x69, 0x76, 0x65, 0x0a, 0x36,
	0x3a, 0x20, 0x73, 0x69, 0x78, 0x0a, 0x37, 0x3a, 0x20, 0x73, 0x65, 0x76,
	0x65, 0x6e, 0x0a, 0x38, 0x3a, 0x20, 0x65, 0x69, 0x67, 0x68, 0x74, 0x0a,
	0x39, 0x3a, 0x20, 0x6e, 0x69, 0x6e, 0x65, 0x0a, 0x31, 0x30, 0x3a, 0x20,
	0x74, 0x65, 0x6e, 0x0a, 0x31, 0x31, 0x3a, 0x20, 0x65, 0x6c, 0x65, 0x76,
	0x65, 0x6e, 0x0a, 0x31, 0x32, 0x3a, 0x20, 0x74, 0x77, 0x65, 0x6c, 0x76,
	0x65, 0x0a, 0x31, 0x33, 0x3a, 0x20, 0x74, 0x68, 0x69, 0x72, 0x74, 0x65,
	0x65, 0x6e, 0x0a, 0x31, 0x34, 0x3a, 0x20, 0x66, 0x6f, 0x75, 0x72, 0x74,
	0x65, 0x65, 0x6e, 0x0a, 0x31, 0x35, 0x3a, 0x20, 0x66, 0x69, 0x66, 0x74,
	0x65, 0x65, 0x6e, 0x0a, 0x31, 0x36, 0x3a, 0x20, 0x73, 0x69, 0x78, 0x74,
	0x65, 0x65, 0x6e, 0x0a, 0x31, 0x37, 0x3a, 0x20, 0x73, 0x65, 0x76, 0x65,
	0x6e, 0x74, 0x65, 0x65, 0x6e, 0x0a, 0x31, 0x38, 0x3a, 0x20, 0x65, 0x69,
	0x67, 0x68, 0x74, 0x65, 0x65, 0x6e, 0x0a, 0x31, 0x39, 0x3a, 0x20, 0x6e,
	0x69, 0x6e, 0x65, 0x74, 0x65, 0x65, 0x6e, 0x0a, 0x32, 0x30, 0x3a, 0x20,
	0x74, 0x77, 0x65, 0x6e, 0x74, 0x79, 0x0a, 0x33, 0x30, 0x3a, 0x20, 0x74,
	0x68, 0x69, 0x72, 0x74, 0x79, 0x0a, 0x34, 0x30, 0x3a, 0x20, 0x66, 0x6f,
	0x72, 0x74, 0x79, 0x0a, 0x35, 0x30, 0x3a, 0x20, 0x66, 0x69, 0x66, 0x74,
	0x79, 0x0a, 0x36, 0x30, 0x3a, 0x20, 0x73, 0x69, 0x78, 0x74, 0x79, 0x0a,
	0x37, 0x30, 0x3a, 0x20, 0x73, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x79, 0x0a,
	0x38, 0x30, 0x3a, 0x20, 0x65, 0x69, 0x67, 0x68, 0x74, 0x79, 0x0a, 0x39,
	0x30, 0x3a, 0x20, 0x6e, 0x69, 0x6e, 0x65, 0x74, 0x79, 0x0a, 0x31, 0x30,
	0x30, 0x3a, 0x20, 0x68, 0x75, 0x6e, 0x64, 0x72, 0x65, 0x64, 0x0a, 0x31,
	0x30, 0x30, 0x30, 0x3a, 0x20, 0x74, 0x68, 0x6f, 0x75, 0x73, 0x61, 0x6e,
	0x64, 0x0a, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3a, 0x20, 0x6d,
	0x69, 0x6c, 0x6c, 0x69, 0x6f, 0x6e, 0x0a, 0x31, 0x30, 0x30, 0x30, 0x30,
	0x30, 0x30, 0x30, 0x30, 0x30, 0x3a, 0x20, 0x62, 0x69, 0x6c, 0x6c, 0x69,
	0x6f, 0x6e, 0x0a, 0x00
};
const unsigned int	g_dict_len = 351;
