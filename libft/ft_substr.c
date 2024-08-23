/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:45:29 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:45:31 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_check(void)
{
	char	*buffer;

	buffer = (char *) malloc(sizeof(char) * 1);
	if (buffer == NULL)
		return (0);
	buffer[0] = '\0';
	return (buffer);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*buffer;

	i = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
	{
		return (ft_check());
	}
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	buffer = (char *) malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (0);
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
