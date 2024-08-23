/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:45:09 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:45:11 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*k;
	char		ch;

	k = (char *)s;
	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			k = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	s = k;
	if (*s == ch)
		return ((char *)s);
	return ((void *)0);
}
