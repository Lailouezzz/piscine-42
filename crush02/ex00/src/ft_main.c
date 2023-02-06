/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-boud <ale-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:11:10 by ale-boud          #+#    #+#             */
/*   Updated: 2023/02/05 17:22:19 by ale-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_except_handler(char *str, t_dict *dict)
{
	ft_dict_free(dict);
	ft_putstr(STDERR_FILENO, str);
	return (EXIT_FAILURE);
}

int	ft_main_arg(t_dict *dict, char *suser)
{
	unsigned int	nbuser;

	if (*ft_skip_if(suser, ft_isdigit) != '\0')
		return (ft_except_handler("Error\n", dict));
	if (ft_atoip(suser, &nbuser) == -1)
		return (ft_except_handler("Error\n", dict));
	if (ft_dict_print_nbr(dict, nbuser) != 0)
		return (ft_except_handler("Error\n", dict));
	ft_dict_free(dict);
	return (EXIT_SUCCESS);
}

int	ft_main_stdin(t_dict *dict)
{
	char	*s;
	int		r;

	s = ft_getline(STDIN_FILENO);
	r = ft_main_arg(dict, s);
	free(s);
	return (r);
}

int	main(int argc, char **argv)
{
	t_dict			*dict;
	int				fd;

	if (argc <= 2)
		dict = ft_dict_read_from_str((char *)g_defaultdict);
	else if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		dict = ft_dict_read(fd);
		close(fd);
	}
	else
		return (ft_except_handler("Invalid number of arguments\n", NULL));
	if (dict == NULL)
		return (ft_except_handler("Dict Error\n", dict));
	if (argc == 1)
		return (ft_main_stdin(dict));
	else
		return (ft_main_arg(dict, argv[argc - 1]));
}
