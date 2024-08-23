/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:47:10 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/21 15:47:11 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLIB_H
#define PLIB_H

#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define HASH "abcdefhijklmnopqrstuvwxyzABCDEFHIJKLMNOPQRSTUVWXYZ0123456789"

/*#############################################################################*/
/*                                [PlibString] */
/*#############################################################################*/

int string_length(char *str);
int string_nlength(char *str, unsigned int n);

char *string_duplicate(char *str);
char *string_nduplicate(char *str, unsigned int n);

char *string_copy(char *dest, char *src);
char *string_ncopy(char *dest, char *src, unsigned int n);

int string_concat(char *dest, char *src);
int string_nconcat(char *str1, char *str2, unsigned int n);

int string_compare(char *str1, char *str2);
int string_ncompare(char *str1, char *str2, unsigned int n);

char *string_join(char *str1, char *str2);
char *string_njoin(char *str1, char *str2, unsigned int n);

char *string_slice(char *str, int start, int end);
char *string_sort(char *str, int (*f)(int ch1, int ch2));
char *string_random(char *set, unsigned int n);
char *string_scramble(char *str, int (*f)(int v, int len));
char *string_reverse(char *str);
char *string_trim(char *str, int ch);
char *string_filter(char *str, int ch);

int   string_index_of(char *str, int ch);
int   string_count(char *str, int ch);
char *string_find_first(char *str, int ch);
char *string_find_last(char *str, int ch);

char *string_substring_find(char *str, char *sub);
char *string_substring_replace(char *str, char *sub, char *with);
char *string_substring_replace_all(char *str, char *sub, char *with);
char *string_substring_nfind(char *str, char *sub, unsigned int n);
char *string_substring_create(char *str, char *sub);

int           string_to_int(char *str);
long          string_to_long(char *str);
unsigned int  string_to_uint(char *str);
unsigned long string_to_ulong(char *str);

char **string_split_destroy(char **split, unsigned int length);
char **string_split(char *str1, int ch);
char **string_nsplit(char *str1, unsigned int n);
char **string_split_set(char *str1, char *charset);

char *string_to_boolset(char *str, char set[255]);
char *string_to_set(char *str, char set[255]);
char *string_to_lowercase(char *str);
char *string_to_upercase(char *str);
char *string_to_capitalize(char *str);

char  *string_map_find(char *str, int (*f)(int ch));
char **string_map_split(char *str1, int (*f)(int ch));
int    string_map_count(char *str, int (*f)(int ch));
char  *string_map_filter(char *str, int (*f)(int ch));
char  *string_map_apply(char *str, int (*f)(int ch));
char  *string_map_duplicate(char *str, int (*f)(int ch));

int string_start_with(char *str, char *prefix);
int string_ends_with(char *str, char *suffix);

/*#############################################################################*/
/*                                [PlibChar] */
/*#############################################################################*/

int char_is_alnum(int ch);
int char_is_alpha(int ch);
int char_is_digit(int ch);
int char_is_newline(int ch);
int char_is_spaces(int ch);
int char_is_whitespace(int ch);
int char_is_lowercase(int ch);
int char_is_upercase(int ch);
int char_is_even(int ch);
int char_is_odd(int ch);
int char_is_printable(int ch);
int char_is_ascii(int ch);
int char_is_binary(int ch);
int char_is_hex(int ch);
int char_is_octal(int ch);
int char_is_decimal(int ch);

int char_to_uppercase(int ch);
int char_to_lowercase(int ch);
int char_to_reversecase(int ch);
int char_to_nextchar(int ch);
int char_to_prevchar(int ch);
int char_to_random(int ch);
int char_to_hash(int ch, int index);
int char_to_zero(int ch);

int char_sort_ascending(int ch1, int ch2);
int char_sort_descending(int ch1, int ch2);

/*#############################################################################*/
/*                                [PlibMemory] */
/*#############################################################################*/

void *memory_alloc(unsigned int size);
void *memory_dealloc(void *ptr);
void *memory_zeroed_alloc(unsigned int size, unsigned int count);
void *memory_nset_alloc(unsigned int size, unsigned int count, int ch);
void *memory_ncopy(void *dest, void *src, unsigned int n);
int   memory_ncompare(void *mem1, void *mem2, unsigned int n);
void *memory_nsearch(void *ptr, int ch, unsigned int n);
void *memory_nset(void *ptr, int ch, unsigned int n);

/*#############################################################################*/
/*                                [PlibBoolSet] */
/*#############################################################################*/

char *boolset_create_from(char *ptr, char *str);

#endif
