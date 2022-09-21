/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:11:27 by aazdoev           #+#    #+#             */
/*   Updated: 2022/03/15 21:11:28 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned int	i;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((void *)a + i);
		i++;
	}
	return (NULL);
}
