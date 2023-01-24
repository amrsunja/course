/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:16:07 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:16:07 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sprite_down(t_player *data)
{
	if (data->move.downcount == 0)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win, data->img.img,
			data->count * 45, data->line * 45);
	}
	else if (data->move.downcount == 1)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.front2.img, data->count * 45, data->line * 45);
	}
	else if (data->move.downcount == 2)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.front3.img, data->count * 45, data->line * 45);
	}
}

void	sprite_up(t_player *data)
{
	if (data->move.upcount == 0)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pup.img, data->count * 45, data->line * 45);
	}
	else if (data->move.upcount == 1)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pup2.img, data->count * 45, data->line * 45);
	}
	else if (data->move.upcount == 2)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pup3.img, data->count * 45, data->line * 45);
	}
}

void	sprite_left(t_player *data)
{
	if (data->move.leftcount == 0)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pleft.img, data->count * 45, data->line * 45);
	}
	else if (data->move.leftcount == 1)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pleft2.img, data->count * 45, data->line * 45);
	}
	else if (data->move.leftcount == 2)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pleft3.img, data->count * 45, data->line * 45);
	}
}

void	sprite_right(t_player *data)
{
	if (data->move.rightcount == 0)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pright.img, data->count * 45, data->line * 45);
	}
	else if (data->move.rightcount == 1)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pright2.img, data->count * 45, data->line * 45);
	}
	else if (data->move.rightcount == 2)
	{
		mlx_put_image_to_window(data->vars.mlx, data->vars.win,
			data->sprite.pright3.img, data->count * 45, data->line * 45);
	}
}

void	reset_move(t_player *data)
{
	data->move.up = 0;
	data->move.down = 0;
	data->move.left = 0;
	data->move.right = 0;
}
