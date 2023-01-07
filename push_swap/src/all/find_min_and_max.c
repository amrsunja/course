/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_and_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:04:35 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/05 12:04:36 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	find_max_a(t_data *data)
{
	t_stack	*stack;

	stack = data->top_stack_a;
	if (stack)
	{
		data->stack_a_max = stack->nb;
		stack = stack->next;
		while (stack)
		{
			if (stack->nb > data->stack_a_max)
					data->stack_a_max = stack->nb;
			stack = stack->next;
		}
	}
}

void	find_min_a(t_data *data)
{
	t_stack	*stack;

	stack = data->top_stack_a;
	data->stack_a_min = stack->nb;
	stack = stack->next;
	while (stack)
	{
		if (stack->nb < data->stack_a_min)
				data->stack_a_min = stack->nb;
		stack = stack->next;
	}
}
