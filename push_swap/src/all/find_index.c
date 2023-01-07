/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:04:31 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/05 12:04:31 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	find_index(t_data *data)
{
	int		i;
	t_stack	*stack;
	t_stack	*stack_cpy;

	stack = data->top_stack_a;
	while (stack)
	{
		i = 0;
		stack_cpy = data->top_stack_a;
		while (stack_cpy)
		{
			if (stack->nb > stack_cpy->nb)
				i++;
			stack_cpy = stack_cpy->next;
		}
		stack->index = i;
		stack = stack->next;
	}
}
