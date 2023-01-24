/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:14:57 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:14:58 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	action_key(int key, t_player *player)
{
	player->move.down = 1;
	if (key == UP)
	{
		player_up(player);
		player->move.upcount += 1;
	}
	if (key == DOWN)
	{
		player_down(player);
		player->move.downcount += 1;
	}
	if (key == LEFT)
	{
		player_left(player);
		player->move.leftcount += 1;
	}
	if (key == RIGHT)
	{
		player_right(player);
		player->move.rightcount += 1;
	}
	if (key == ECHAP)
		ft_close(player);
	reset_valuecount(player);
	return (0);
}

void	player_up(t_player *data)
{
	char	**tmp;

	tmp = data->maps;
	if (tmp[data->line][data->count] == 'P')
	{
		if (data->treas == data->find && tmp[data->line -1][data->count] == 'E')
			ft_close_win(data);
		if (tmp[data->line -1][data->count] == 'M')
		{
			print_movement(data);
			ft_printf("YOU LOSE!\n");
			ft_close(data);
		}
		if (tmp[data->line -1][data->count] != '1' &&
				tmp[data->line -1][data->count] != 'E')
		{
			if (tmp[data->line -1][data->count] == 'C')
				data->find += 1;
			tmp[data->line][data->count] = '0';
			tmp[data->line -1][data->count] = 'P';
		}
		close_action(data);
		data->move.up = 1;
	}
}

void	player_down(t_player *data)
{
	char	**tmp;

	tmp = data->maps;
	if (tmp[data->line][data->count] == 'P')
	{
		if (data->treas == data->find && tmp[data->line +1][data->count] == 'E')
			ft_close_win(data);
		if (tmp[data->line +1][data->count] == 'M')
		{
			print_movement(data);
			ft_printf("YOU LOSE!\n");
			ft_close(data);
		}
		if (tmp[data->line +1][data->count] != '1' &&
				tmp[data->line +1][data->count] != 'E')
		{
			if (tmp[data->line +1][data->count] == 'C')
				data->find += 1;
			tmp[data->line][data->count] = '0';
			tmp[data->line +1][data->count] = 'P';
		}
		close_action(data);
		data->move.down = 1;
	}
}

void	player_left(t_player *data)
{
	char	**tmp;

	tmp = data->maps;
	if (tmp[data->line][data->count] == 'P')
	{
		if (data->treas == data->find && tmp[data->line][data->count -1] == 'E')
			ft_close_win(data);
		if (tmp[data->line][data->count -1] == 'M')
		{
			print_movement(data);
			ft_printf("YOU LOSE!\n");
			ft_close(data);
		}
		if (tmp[data->line][data->count -1] != '1' &&
				tmp[data->line][data->count -1] != 'E')
		{
			if (tmp[data->line][data->count -1] == 'C')
				data->find += 1;
			tmp[data->line][data->count] = '0';
			tmp[data->line][data->count -1] = 'P';
		}
		close_action(data);
		data->move.left = 1;
	}
}

void	player_right(t_player *data)
{
	char	**tmp;

	tmp = data->maps;
	if (tmp[data->line][data->count] == 'P')
	{
		if (data->treas == data->find && tmp[data->line][data->count +1] == 'E')
			ft_close_win(data);
		if (tmp[data->line][data->count +1] == 'M')
		{
			print_movement(data);
			ft_printf("YOU LOSE!\n");
			ft_close(data);
		}
		if (tmp[data->line][data->count +1] != '1' &&
				tmp[data->line][data->count +1] != 'E')
		{
			if (tmp[data->line][data->count +1] == 'C')
				data->find += 1;
			tmp[data->line][data->count] = '0';
			tmp[data->line][data->count +1] = 'P';
		}
		close_action(data);
		data->move.right = 1;
	}
}
