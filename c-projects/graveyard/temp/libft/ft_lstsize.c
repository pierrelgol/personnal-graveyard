/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:30:08 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 12:30:11 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	register int	size;
	const t_list	*itter;

	size = 0;
	itter = lst;
	if (lst == NULL)
		return (0);
	while (itter)
	{
		itter = itter->next;
		++size;
	}
	return (size);
}
