/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:38:25 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:38:28 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*buffer;

	i = 0;
	buffer = (void *) malloc(count * size);
	if (buffer == NULL)
		return (0);
	while (count * size > i)
	{
		((char *)buffer)[i] = '\0';
		i++;
	}
	return (buffer);
}
