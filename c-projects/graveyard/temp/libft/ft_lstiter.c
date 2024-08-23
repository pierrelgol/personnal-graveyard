/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:14:36 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 12:14:39 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	register t_list	*itter;

	if (lst && f)
	{
		itter = lst;
		while (itter)
		{
			f(itter->content);
			itter = itter->next;
		}
	}
}
