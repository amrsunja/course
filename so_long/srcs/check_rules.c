/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:15:15 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:15:16 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	search_find(t_player *data)
{
	char	**tmp;
	int		i;
	int		j;
	int		k;

	tmp = data->maps;
	i = 0;
	j = 0;
	k = 0;
	while (i < data->total)
	{
		while (tmp[i][j] != '\n')
		{
			if (tmp[i][j] == 'C')
				k += 1;
			j++;
		}
		j = 0;
		i++;
	}
	data->treas = k;
	data->find = 0;
}

int	check_minimal(t_player *data)
{
	if (check_minimal_collect(data) == 1 && check_minimal_player(data) == 1
		&& check_minimal_exit(data) == 1)
		return (1);
	else
		return (0);
}

int	check_minimal_collect(t_player *data)
{
	char	**tmp;
	int		i;
	int		j;
	int		k;

	tmp = data->maps;
	i = 0;
	j = 0;
	k = 0;
	while (i < data->total)
	{
		while (tmp[i][j] != '\n')
		{
			if (tmp[i][j] == 'C')
				k += 1;
			j++;
		}
		j = 0;
		i++;
	}
	if (k >= 1)
		return (1);
	else
		return (0);
}

int	check_minimal_player(t_player *data)
{
	char	**tmp;
	int		i;
	int		j;
	int		k;

	tmp = data->maps;
	i = 0;
	j = 0;
	k = 0;
	while (i < data->total)
	{
		while (tmp[i][j] != '\n')
		{
			if (tmp[i][j] == 'P')
				k += 1;
			j++;
		}
		j = 0;
		i++;
	}
	if (k == 1)
		return (1);
	else
		return (0);
}

int	check_minimal_exit(t_player *data)
{
	char	**tmp;
	int		i;
	int		j;
	int		k;

	tmp = data->maps;
	i = 0;
	j = 0;
	k = 0;
	while (i < data->total)
	{
		while (tmp[i][j] != '\n')
		{
			if (tmp[i][j] == 'E')
				k += 1;
			j++;
		}
		j = 0;
		i++;
	}
	if (k == 1)
		return (1);
	else
		return (0);
}
