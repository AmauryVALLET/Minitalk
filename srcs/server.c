/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:26:20 by avallet           #+#    #+#             */
/*   Updated: 2023/05/16 15:23:59 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

struct s_global
{
	char	g_char;
	int		g_bit_count;
};

struct s_global	g_data;

void	handle_signal(int sig)
{
	if (sig == SIGUSR1)
		g_data.g_char |= (0 << g_data.g_bit_count);
	else if (sig == SIGUSR2)
		g_data.g_char |= (1 << g_data.g_bit_count);
	g_data.g_bit_count++;
	if (g_data.g_bit_count == 8)
	{
		write(1, &g_data.g_char, 1);
		g_data.g_char = 0;
		g_data.g_bit_count = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;
	int					pid;

	g_data.g_char = 0;
	g_data.g_bit_count = 0;
	ft_memset(&sa, 0, sizeof(sa));
	sa.sa_handler = &handle_signal;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	while (1)
		pause();
	return (0);
}
