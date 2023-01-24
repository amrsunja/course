/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:18:16 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/24 11:18:17 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_search_arg(va_list arg, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	if (format == 's')
		len += ft_pourcents(va_arg(arg, char *));
	if (format == 'p')
		len += ft_pourcentp(va_arg(arg, unsigned long long));
	if (format == 'd' || format == 'i')
		len += ft_pourcentdi(va_arg(arg, int));
	if (format == 'u')
		len += ft_pourcentu(va_arg(arg, unsigned int));
	if (format == 'x')
		len += ft_pourcentx(va_arg(arg, unsigned int));
	if (format == 'X')
		len += ft_pourcentupperx(va_arg(arg, unsigned int));
	if (format == '%')
		len += ft_pourcenttwice();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	va_start (arg, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_search_arg(arg, format[i + 1]);
			++i;
		}
		else
			len += ft_putchar(format[i]);
		++i;
	}
	va_end (arg);
	return (len);
}
