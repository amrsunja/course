/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_appendC.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:54:15 by aazdoev           #+#    #+#             */
/*   Updated: 2022/09/21 13:31:16 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_append_c(char *start, char c)
{
	size_t	i;
	char	*tmp;

	tmp = malloc(ft_strlen(start) + 2);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (start[i] != '\0')
	{
		tmp[i] = start[i];
		i++;
	}
	tmp[i] = c;
	tmp[i + 1] = '\0';
	free(start);
	return (tmp);
}
