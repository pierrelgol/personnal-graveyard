/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:13:07 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 12:13:14 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	register t_list	*next;
	register t_list	*prev;

	if (lst && *lst && del)
	{
		next = *lst;
		while (next)
		{
			prev = next;
			next = next->next;
			if (prev)
			{
				del(prev->content);
				free(prev);
			}
		}
		*lst = NULL;
	}
}
