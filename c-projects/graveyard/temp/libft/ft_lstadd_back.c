/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:11:41 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 12:11:45 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	register t_list	*itter;

	if (*lst)
	{
		itter = *lst;
		while (itter->next)
			itter = itter->next;
		itter->next = node;
	}
	else
		*lst = node;
}
