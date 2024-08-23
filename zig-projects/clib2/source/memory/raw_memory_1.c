/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raw_memory_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie.student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:27:03 by pollivie          #+#    #+#             */
/*   Updated: 2024/05/05 16:27:04 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/clib.h"

void *raw_alloc(const uint64_t size)
{
	char *ptr;

	ptr = malloc(size + (1 * (size == 0)));
	return (raw_zero(ptr, size + (1 * (size == 0))));
}

void *raw_dealloc(void *const ptr)
{
	free(ptr);
	return (NULL);
}

void *raw_resize(void *const ptr, const uint64_t osize, const uint64_t nsize)
{
	char *result;

	if (osize == nsize)
		return (ptr);
	result = raw_alloc(nsize);
	result = raw_copy(result, ptr, osize);
	return (result);
}

void *raw_dup(const void *ptr, const int64_t size)
{
	char *result;

	result = raw_alloc(size);
	result = raw_copy(result, ptr, size);
	return (result);
}

void *raw_dupz(const void *ptr)
{
	char    *result;
	uint64_t size;

	size = raw_search(ptr, 0x00, UINT64_MAX) - ptr;
	result = raw_alloc(size + 1);
	result = raw_copy(result, ptr, size);
	result[size] = 0x00;
	return (result);
}

void *raw_copy(void *const dst, const void *src, const uint64_t dstsize)
{
	unsigned char *ptr_a;
	unsigned char *ptr_b;
	uint64_t       i;

	if (dstsize == 0)
		return (dst);
	i = 0;
	ptr_a = (unsigned char *) dst;
	ptr_b = (unsigned char *) src;
	while (i < dstsize)
	{
		*ptr_a++ = *ptr_b++;
		++i;
	}
	return (dst);
}

void *raw_ccopy(void *const dst, const int32_t byte, const void *src, const uint64_t dstsize)
{
	unsigned char *s;
	unsigned char *d;
	uint64_t       i;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (i < dstsize)
	{
		if (*(s + i) == (uint8_t) byte)
			return (s + i + 1);
		*(d + i) = *(s + i);
		++i;
	}
	return (0);
}

void *raw_fill(void *const dst, const int32_t byte, const uint64_t dstsize)
{
	unsigned char *ptr;
	uint64_t       i;

	ptr = (unsigned char *) dst;
	i = 0;
	while (i < dstsize)
		ptr[i++] = byte;
	return (dst);
}

void *raw_zero(void *const dst, const uint64_t dstsize)
{
	unsigned char *ptr;
	uint64_t       i;

	ptr = (unsigned char *) dst;
	i = 0;
	while (i < dstsize)
		ptr[i++] = 0x00;
	return (dst);
}

void *raw_search(const void *s, const int32_t byte, const uint64_t dstsize)
{
	unsigned char *ptr;
	uint64_t       i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < dstsize)
	{
		if (ptr[i] == byte)
			return ((unsigned char *) (s + i));
		++i;
	}
	return (NULL);
}

int32_t raw_compare(const void *a, const void *b, const uint64_t size)
{
	unsigned char *ptr_a;
	unsigned char *ptr_b;
	uint64_t       i;

	i = 0;
	ptr_a = (unsigned char *) a;
	ptr_b = (unsigned char *) b;
	while (ptr_a[i] == ptr_b[i] && i < size)
		++i;
	return (ptr_a[i] - ptr_b[i]);
}

void *raw_move(void *dst, const void *src, const uint64_t len)
{
	const char *ptr_src;
	char       *ptr_dst;
	uint64_t	l;

	ptr_src = (const char *) src;
	ptr_dst = (char *) dst;
	l = len;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (l)
		{
			*(ptr_dst + len - 1) = *(ptr_src + len - 1);
			l--;
		}
		return (dst);
	}
	while (l--)
		*ptr_dst++ = *ptr_src++;
	return (dst);
}
