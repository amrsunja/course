/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcentx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:16:59 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:17:00 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strintx(unsigned int nb)
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

void	ft_putnbrx(unsigned int num)
{
	if (num >= 16)
	{
		ft_putnbrx(num / 16);
		ft_putnbrx(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_pourcentx(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		len += write(1, "0", 1);
	else
	{
		ft_putnbrx(num);
		len += ft_strintx(num);
	}
	return (len);
}
