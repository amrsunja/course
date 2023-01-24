/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcentp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:16:43 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:16:44 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strintp(unsigned long long nb)
{
	int	str;

	str = 0;
	while (nb)
	{
		nb /= 16;
		str++;
	}
	return (str);
}

void	ft_putnbrp(unsigned long long num)
{
	if (num >= 16)
	{
		ft_putnbrp(num / 16);
		ft_putnbrp(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_pourcentp(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write (1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_putnbrp(ptr);
		len += ft_strintp(ptr);
	}
	return (len);
}
