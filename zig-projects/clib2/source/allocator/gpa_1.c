/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gpa_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie.student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:23:54 by pollivie          #+#    #+#             */
/*   Updated: 2024/05/05 17:23:55 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/clib.h"

t_allocator *gpa_init(t_logger *logger)
{
	t_allocator *interface;

	struct s_gpa_allocator *gpa;

	interface = raw_alloc(sizeof(t_allocator));
	gpa = raw_alloc(sizeof(struct s_gpa_allocator));
	gpa->freelist = NULL;
	gpa->usedlist = NULL;
	interface->handle = gpa;
	interface->log = logger;
	interface->alloc = gpa_alloc;
	interface->dealloc = gpa_dealloc;
	interface->resize = gpa_resize;
	interface->dup = gpa_dup;
	interface->dupz = gpa_dupz;
	interface->deinit = gpa_deinit;

	return (interface);
}

void *gpa_deinit(t_allocator *const allocator)
{
	struct s_gpa_allocator *handle;
	t_mem_node             *temp;

	handle = (struct s_gpa_allocator *) allocator->handle;
	while (handle->freelist)
	{
		temp = handle->freelist;
		handle->freelist = handle->freelist->next;
		mem_node_destroy(temp);
	}
	while (handle->usedlist)
	{
		temp = handle->usedlist;
		handle->usedlist = handle->usedlist->next;
		mem_node_destroy(temp);
	}
	raw_dealloc(allocator->handle);
	return (raw_dealloc(allocator));
}

void *gpa_alloc(void *const handle, const uint64_t size)
{
}

void *gpa_dealloc(void *const handle, void *const ptr);

void *gpa_resize(void *const handle, void *const ptr, const uint64_t nsize)
{
	struct s_gpa_allocator *gpa;
	void                   *result;
	uint64_t				len;

	gpa = (struct s_gpa_allocator *) handle;
	result = gpa_alloc(handle, nsize);
	return (raw_copy(result, ptr, size));
}

void *gpa_dup(void *const handle, void *const ptr, const uint64_t size)
{
	struct s_gpa_allocator *gpa;
	void                   *result;

	gpa = (struct s_gpa_allocator *) handle;
	result = gpa_alloc(handle, size);
	return (raw_copy(result, ptr, size));
}

void *gpa_dupz(void *const handle, void *const ptr)
{
	struct s_gpa_allocator *gpa;
	void                   *result;
	uint64_t                len;

	len = raw_search(ptr, 0x00, UINT64_MAX) - ptr;
	gpa = (struct s_gpa_allocator *) handle;
	result = gpa_alloc(handle, len + 1);
	return (raw_copy(result, ptr, len));
}
