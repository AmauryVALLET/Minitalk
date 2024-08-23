/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:41:55 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:41:59 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (len != 0)
	{
		len--;
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
