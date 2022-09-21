/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:46:45 by aazdoev           #+#    #+#             */
/*   Updated: 2022/09/21 11:46:46 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

char	*ft_uitoa(unsigned int n);
char	*ft_hexitoa(unsigned long n, char cha);
int		ft_printf(const char *s, ...);

#endif
