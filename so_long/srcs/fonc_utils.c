/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonc_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:15:35 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:15:36 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_movement(t_player *data)
{
	data->movement += 1;
	ft_printf("move : %d\n", data->movement);
}

void	find_lastcol(t_player *data)
{
	char	**tmp;
	int		i;

	tmp = data->maps;
	i = 0;
	i = ((int)ft_strlen(&tmp[0][i]) - 1);
	data->lastcol = i;
}

void	ft_backslashn(t_player *data)
{
	char	**tmp;

	tmp = data->maps;
	if (tmp[data->total -1][data->lastcol] == '\n' ||
			tmp[data->total -1][data->lastcol] == '\0')
	{
		tmp[data->total -1][data->lastcol] = '\n';
		tmp[data->total -1][data->lastcol +1] = '\0';
	}
}

int	search_ber(const char *str)
{
	int	i;

	i = 0;
	i = ft_strlen(&str[i]);
	if (i < 5)
		return (0);
	if (str[--i] != 'r')
		return (0);
	if (str[--i] != 'e')
		return (0);
	if (str[--i] != 'b')
		return (0);
	if (str[--i] != '.')
		return (0);
	return (1);
}

void	close_action(t_player *data)
{
	ft_find_player(data);
	reset_move(data);
	print_movement(data);
}	
