/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:41:15 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:41:18 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*k;
	unsigned char	ch;

	i = 0;
	k = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (*k == ch)
			return (k);
		k++;
		i++;
	}
	return ((void *)0);
}
