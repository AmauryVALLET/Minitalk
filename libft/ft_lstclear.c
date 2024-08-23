/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:39:56 by avallet           #+#    #+#             */
/*   Updated: 2023/04/17 11:46:21 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*tmp;
	t_list	*elt;

	elt = *lst;
	if (*lst == NULL)
		return ;
	while (elt != NULL)
	{
		tmp = elt->next;
		del(elt->content);
		free(elt);
		elt = tmp;
	}
	*lst = NULL;
}
