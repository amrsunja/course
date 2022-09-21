/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:53:43 by aazdoev           #+#    #+#             */
/*   Updated: 2022/09/21 13:35:04 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
// вернуть глобальную переменную (25 линий проблема)
static void	ft_del_global(void)
{
	free(g_client);
	g_client = NULL;
}

// конвертировать бинарник в ascii или unicode
// вернуть результат как int
// Если это не только для comparison он выводит караткер
static int	ft_convert(char *s, int b_write)
{
	int				pow;
	int				c;
	size_t			i;

	pow = 1;
	c = 0;
	i = ft_strlen(s) - 1;
	while (i + 1 != 0)
	{
		c += pow * (s[i] - '0');
		pow *= 2;
		i--;
	}
	if (b_write == 1)
	{
		write(1, &c, 1);
		return (0);
	}
	return (c);
}

// reads every bit and appends it to bits
// if its a 8 bit ascii char or a 24 bit unicode char it converts it
// the result gets printed and the server sends the client an ack
static void	ft_confirm(int sig)
{
	static char	*bits;
	static int	bitcount;

	bitcount++;
	if (bits == NULL)
	{
		bits = ft_strdup("");
		bitcount = 1;
	}
	if (sig == SIGUSR2)
		bits = ft_append_c(bits, '0');
	else
		bits = ft_append_c(bits, '1');
	if ((bitcount == 8 && ft_convert(bits, 0) < 255) || bitcount == 24)
	{
		if (ft_convert(bits, 0) == 0 && bitcount != 24)
			ft_del_global();
		else
		{
			ft_convert(bits, 1);
			kill(ft_atoi(g_client), SIGUSR1);
		}
		free(bits);
		bits = NULL;
	}
}

// safes all bits in a string and conerts every byte to a char
// the char will get appended to the client variable (PID)
static void	ft_get_pid(int sig)
{
	static char	*bits;
	static int	bitcount;

	bitcount++;
	if (bits == NULL)
	{
		bits = ft_strdup("");
		bitcount = 1;
	}
	if (sig == SIGUSR2)
		bits = ft_append_c(bits, '0');
	else
		bits = ft_append_c(bits, '1');
	if (bitcount == 8)
	{
		g_client = ft_append_c(g_client, ft_convert(bits, 0));
		free(bits);
		bits = NULL;
	}
}

// if it has not the clinet PID it takes 8 bytes the client PID
// otherwise it will decode the binary to ascii and print it
int	main(void)
{
	ft_printf("Server PID: %u\n", getpid());
	while (1 == 1)
	{
		if (g_client == NULL)
		{
			g_client = ft_strdup("");
			while (ft_strlen(g_client) < 7)
			{
				signal(SIGUSR1, ft_get_pid);
				signal(SIGUSR2, ft_get_pid);
				pause();
			}
		}
		signal(SIGUSR1, ft_confirm);
		signal(SIGUSR2, ft_confirm);
		pause();
	}
	return (0);
}
