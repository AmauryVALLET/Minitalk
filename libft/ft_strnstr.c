/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:44:57 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:45:00 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	if (needle[j] == ' ' || needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len != 0)
	{
		length = len;
		while (haystack[i + j] != '\0' && len != 0 \
				&& haystack[i + j] == needle[j])
		{
			j++;
			len--;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		j = 0;
		i++;
		len = length;
		len--;
	}
	return ((void *)0);
}
