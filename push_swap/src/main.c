/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:06:06 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/05 12:06:07 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 1)
		return (0);
	ft_bzero(&data, sizeof(data));
	parse_args(argv, &data);
	if (data.stack_a_size == 1)
		exit_success(&data);
	sort(&data);
	if (sorted(&data) == EXIT_SUCCESS)
		exit_success(&data);
	else
		exit_free(&data);
	return (0);
}
