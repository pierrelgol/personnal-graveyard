/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:15:17 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 12:15:20 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	register t_list	*itter;

	if (lst)
	{
		itter = lst;
		while (itter->next)
		{
			itter = itter->next;
		}
		return (itter);
	}
	return (NULL);
}
