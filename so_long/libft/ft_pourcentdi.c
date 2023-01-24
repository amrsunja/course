/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcentdi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:16:39 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:16:40 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strint(int nb)
{
	int	str;
	int	neg;
	int	number;

	str = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		neg = 1;
		number = -nb;
	}
	else
	{
		neg = 0;
		number = nb;
	}
	while (number)
	{
		number /= 10;
		str++;
	}
	return (str + neg);
}

int	ft_pourcentdi(int nb)
{
	int		len;
	long	a;

	a = nb;
	len = 0;
	if (nb == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (a < 0)
	{
		ft_putchar('-');
		a = a * -1;
	}
	if (a < 10)
		ft_putchar(a + 48);
	else
	{
		ft_pourcentdi(a / 10);
		ft_pourcentdi(a % 10);
	}
	len += ft_strint(nb);
	return (len);
}
