/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:12:31 by aazdoev           #+#    #+#             */
/*   Updated: 2022/03/15 21:12:32 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dest_len;

	n = size;
	d = dest;
	s = src;
	while (n-- != 0 && *d != '\0')
		d++;
	dest_len = d - dest;
	n = size - dest_len;
	if (n == 0)
		return (dest_len + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dest_len + (s - src));
}
