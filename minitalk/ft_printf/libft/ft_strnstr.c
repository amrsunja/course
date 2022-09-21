/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:12:58 by aazdoev           #+#    #+#             */
/*   Updated: 2022/03/15 21:13:00 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i + j < len)
	{
		if (haystack[i + j] == needle[j])
		{
			if (needle[++j] == '\0')
				return ((char *)haystack + i);
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
