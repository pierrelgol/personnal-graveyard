/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clib.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie.student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:23:24 by pollivie          #+#    #+#             */
/*   Updated: 2024/05/04 13:23:25 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLIB_H__
#define __CLIB_H__

#include "clib_internals.h"

void expect(bool condition);

void *raw_alloc(const uint64_t size);
void *raw_dealloc(void *const ptr);
void *raw_resize(void *const ptr, const uint64_t osize, const uint64_t nsize);
void *raw_dup(const void *ptr, const int64_t size);
void *raw_dupz(const void *ptr);
void *raw_copy(void *const dst, const void *src, const uint64_t dstsize);
void *raw_ccopy(void *const dst, const int32_t byte, const void *src, const uint64_t dstsize);
void   *raw_fill(void *const dst, const int32_t byte, const uint64_t dstsize);
void   *raw_zero(void *const dst, const uint64_t dstsize);
void   *raw_search(const void *s, const int32_t byte, const uint64_t dstsize);
void   *raw_move(void *dst, const void *src, const uint64_t len);
int32_t raw_compare(const void *a, const void *b, const uint64_t size);

void *memalloc(t_allocator *const allocator, const uint64_t size);
void *memdealloc(t_allocator *const allocator, void *const ptr);
void *memresize(t_allocator *const allocator, void *const ptr, const uint64_t osize, const uint64_t nsize);
void *memdup(t_allocator *const allocator, const void *ptr, const int64_t size);
void *memdupz(t_allocator *const allocator, const void *ptr);

/* mem_list.c */


#endif
