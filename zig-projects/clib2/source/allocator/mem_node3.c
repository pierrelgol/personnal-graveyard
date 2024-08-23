/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_node3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie.student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:39:40 by pollivie          #+#    #+#             */
/*   Updated: 2024/05/05 14:39:41 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/clib.h"

t_mem_node *mem_node_remove_matching(t_mem_node **head, uintptr_t addr)
{
	t_mem_node	*prev;
	t_mem_node	*curr;

	if (!head || !*head || !addr)
		return (NULL);
	if (mem_node_contains_ptr((*head), addr))
	{
		curr = (*head);
		(*head) = curr->next;
		curr->next = NULL;
		return (curr);
	}
	prev = (*head);
	curr = (*head)->next;
	while (curr)
	{
		if (mem_node_contains_ptr(curr, addr))
			return (mem_node_remove_child(prev));
		prev = curr;
		curr = mem_node_next_or_null(curr);
	}
	return (NULL);
}
