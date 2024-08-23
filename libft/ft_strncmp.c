/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:44:37 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:46:33 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n - 1 && str1[i] == str2[i] && \
			str1[i] != '\0' && str2[i] != '\0')
		i++;
	if (n == 0 || (str1[i] == '\0' && str2[i] == '\0'))
		return (0);
	return (str1[i] - str2[i]);
}
