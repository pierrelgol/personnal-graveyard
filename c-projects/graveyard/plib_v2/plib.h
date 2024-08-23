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
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_PATH_SIZE 48

// #define ALOWE "abcdefhijklmnopqrstuvwxyz"
// #define AUPER "ABCDEFHIJKLMNOPQRSTUVWXYZ"
// #define ALPHA "abcdefhijklmnopqrstuvwxyzABCDEFHIJKLMNOPQRSTUVWXYZ"
// #define ALNUM "abcdefhijklmnopqrstuvwxyzABCDEFHIJKLMNOPQRSTUVWXYZ0123456789"
// #define DIGIT "0123456789"

typedef int (*t_comparator)(void *, void *);

/* ------------------------- plib_list ------------------------- */

typedef struct s_list
{
	struct s_list *next;
	void          *data;
} t_list;

t_list *plib_list_create(void *data);
void    plib_list_destroy(t_list **list);
void    plib_list_remove(t_list **list, t_list *node);
t_list *plib_list_insert_after(t_list *node, void *data);
t_list *plib_list_insert_front(t_list *list, void *data);
t_list *plib_list_insert_back(t_list *list, void *data);
t_list *plib_list_find_node(t_list *list, t_list *node);
t_list *plib_list_find_data(t_list *list, void *data, t_comparator comp);

/* ------------------------- plib_table ------------------------ */

typedef struct s_entry
{
	char *key;
	void *value;
} t_entry;

typedef struct s_table
{
	unsigned int size;
	unsigned int capacity;
	t_entry     *body;
} t_table;

t_table      *plib_table_create(void);
void          plib_table_destroy(t_table *self);
void          plib_table_entry_set(t_table *self, char *key, void *value);
void         *plib_table_entry_get(t_table *self, char *key);
unsigned long plib_table_hash(char *str);

t_entry     *plib_table_body_create(unsigned int capacity);
void         plib_table_body_remove(t_table *self, char *key);
void         plib_table_body_resize(t_table *self, unsigned int capacity);
unsigned int plib_table_body_find_empty(t_table *self, char *key);

/* ------------------------- plib_string ----------------------- */

int    plib_string_compare(char *str1, char *str2);
int    plib_string_compare_until(char *str1, char *str2, unsigned int cmpsize);
int    plib_string_concat(char *dst, char *str);
char  *plib_string_copy(char *dest, char *src, unsigned int cpysize);
char  *plib_string_duplicate(char *str);
char  *plib_string_find_first(char *str, int ch);
char  *plib_string_find_last(char *str, int ch);
char  *plib_string_join(char *str1, char *str2);
int    plib_string_length(char *str);
int    plib_string_index_of(char *str, int ch);
char **plib_string_split(char *str, char *charset);
char  *plib_string_substring_create(char *str, int start, int length);
char  *plib_string_substring_find(char *str, char *sub, unsigned int srchsize);
int    plib_string_to_int(char *nbr);
char  *plib_string_to_lowercase(char *str);
char  *plib_string_to_upercase(char *str);
char  *plib_string_trim(char *str, char *charset);

/* ------------------------- plib_memory ----------------------- */

void *plib_memory_alloc(unsigned int count, unsigned int size);
void *plib_memory_dealloc(void *ptr);
void *plib_memory_set(void *src, int ch, unsigned int setsize);
void *plib_memory_find_first(void *src, int ch, unsigned int srchsize);
void *plib_memory_find_last(void *src, int ch, unsigned int srchsize);
int   plib_memory_compare(void *src1, void *src2, unsigned int cmpsize);
void *plib_memory_copy(void *dst, void *src, unsigned int cpysize);
void *plib_memory_move(void *dst, void *src, unsigned int movsize);

/* ------------------------- plib_char ------------------------- */

int   plib_char_is_alpha(int ch);
int   plib_char_is_ascii(int ch);
int   plib_char_is_digit(int ch);
int   plib_char_is_lowercase(int ch);
int   plib_char_is_upercase(int ch);
int   plib_char_is_printable(int ch);
int   plib_char_is_space(int ch);
int   plib_char_is_alpha_numerical(int ch);
int   plib_char_is_in_range(int lbound, int ubound, int ch);
char *plib_char_boolset_create(char *str);
char *plib_char_boolset_create_from(char *empty_set, char *str);
char *plib_char_boolset_destroy(char *set);
char *plib_char_set_create(char *str);
char *plib_char_set_create_from(char *empty_set, char *str);
char *plib_char_set_destroy(char *set);

/* ------------------------- plib_testing ------------------------- */

int   plib_testing_assert_memory_eq(void *m1, void *m2, int n, char *name);
int   plib_testing_assert_string_eq(char *str1, char *str2, char *name);
char *plib_testing_string_generator(char *set, int length);
char *plib_testing_fstring_generator(char *around, char *inside, int size);
int   plib_testing_assert_condition(int condition, char *name);

/* ------------------------- plib_misc ------------------------- */

void plib_insertion_sort(void *data, size_t nel, size_t width, t_comparator comp);
float        plib_fast_square_root(float number);
unsigned int plib_fast_random_int(unsigned int index);

/* ------------------------- plib_IO ------------------------- */

typedef enum e_stream_kind
{
	KIND_NULL,
	KIND_FILE,
	KIND_PTR,
} t_stream_kind;

typedef enum e_stream_mode
{
	MODE_BUFFED,
	MODE_UNBUFFED,
} t_stream_mode;

typedef enum e_stream_signal
{
	SIGNAL_OK,
	SIGNAL_EOF,
	SIGNAL_OPEN,
	SIGNAL_ERR,
} t_stream_signal;

struct s_stream_generic
{
	int		signal;
	int		mode;
	int		kind;
	int             size;
	int             cursor;
	int             ch;
	int             perm;
	int             handle;
	char           *path;
	char           *buff;
};

typedef struct s_stream_generic t_generic_private;
typedef struct s_stream_generic t_generic_reader;
typedef struct s_stream_generic t_generic_writer;

struct s_stream
{
	t_generic_private _private;
	t_generic_reader  _reader;
	t_generic_writer  _writer;
	char              src_path[MAX_PATH_SIZE];
	char              dst_path[MAX_PATH_SIZE];
};

typedef struct s_stream t_stream;
typedef struct s_stream t_file;
typedef struct s_stream t_reader;
typedef struct s_stream t_writer;

t_file *plib_stream_file_create_from_fd(int fd, int perm, char *buffer, int size);
t_file *plib_stream_file_create(char *path, int perm, char *buffer, int size);
t_file	*plib_stream_file_copy(t_file *file);
void	plib_stream_file_close(t_file *file);
t_file *plib_stream_file_destroy(t_file *file);

t_reader *plib_stream_file_get_reader(t_file *file);
t_writer *plib_stream_file_get_writer(t_file *file);

int plib_stream_reader_read(t_reader *reader);
int plib_stream_writer_write(t_writer *writer);





#endif
