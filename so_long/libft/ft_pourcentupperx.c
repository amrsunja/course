/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcentupperx.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:16:56 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:16:57 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strintupperx(unsigned int nb)
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

void	ft_putnbrupperx(unsigned int num)
{
	if (num >= 16)
	{
		ft_putnbrupperx(num / 16);
		ft_putnbrupperx(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'A');
	}
}

int	ft_pourcentupperx(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		len += write(1, "0", 1);
	else
	{
		ft_putnbrupperx(num);
		len += ft_strintupperx(num);
	}
	return (len);
}
