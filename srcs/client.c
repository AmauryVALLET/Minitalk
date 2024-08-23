/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:26:10 by avallet           #+#    #+#             */
/*   Updated: 2023/05/16 14:42:05 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"

// kill envoi le signal SIGUSR1 au process cible, le PID de server
void	send_bit(pid_t pid, int bit)
{
	if (bit == 0)
		kill(pid, SIGUSR1);
	else if (bit == 1)
		kill(pid, SIGUSR2);
	usleep(500);
}

// >> pour aller du bit le - au + significatif
void	send_char(pid_t pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		send_bit(pid, (c >> i) & 1);
		i++;
	}
}

void	send_string(pid_t pid, char *str)
{
	while (*str)
	{
		send_char(pid, *str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3)
	{
		write(1, "Usage: client PID string\n", 25);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	send_string(pid, argv[2]);
	return (0);
}
