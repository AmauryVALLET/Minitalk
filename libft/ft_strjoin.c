/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:43:48 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:43:51 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len(char const *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*buffer;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	buffer = (char *)malloc(ft_len(s1) + ft_len(s2) + 1);
	if (buffer == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}
