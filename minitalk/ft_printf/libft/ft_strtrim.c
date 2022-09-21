/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:13:07 by aazdoev           #+#    #+#             */
/*   Updated: 2022/03/15 21:13:08 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*rtrn;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		rtrn = ft_strdup("");
		if (!rtrn)
			return (NULL);
		else
			return (rtrn);
	}
	while (in_set(s1[end - 1], set) == 0)
		end--;
	rtrn = ft_substr(s1, start, end - start);
	return (rtrn);
}
