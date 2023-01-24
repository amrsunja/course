/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcentu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:16:52 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:16:53 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strintu(unsigned int nb)
{
	unsigned int	str;

	str = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		str++;
	}
	return (str);
}

int	ft_pourcentu(unsigned int nb)
{
	int				len;
	unsigned int	n;

	n = nb;
	len = ft_strintu(n);
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_pourcentu(nb / 10);
		ft_pourcentu(nb % 10);
	}
	return (len);
}
