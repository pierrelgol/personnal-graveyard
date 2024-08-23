#ifndef LEX_SYMTAB_H
#define LEX_SYMTAB_H

#define TABLE_BASE_CAP 256
#include "lex_memory.h"
#include <assert.h>

typedef struct s_entry
{
	char           *key;
	int             len;
	void           *obj;
	struct s_entry *next;

} Entry;

typedef struct s_table SymTab;

typedef int (*fn_insert)(SymTab *self, char *key, int len, void *obj);
typedef int (*fn_hash)(SymTab *self, char *key, int len, void *obj);
typedef int (*fn_lookup)(SymTab *self, char *key, int len);
typedef int (*fn_remove)(SymTab *self, char *key, int len);

typedef struct s_table
{
	int       size;
	int       capacity;
	fn_insert insert;
	fn_hash   hash;
	fn_lookup lookup;
	fn_remove remove;
	FnMem    *mem;
	Entry   **table;

} SymTab;

SymTab *symtab_init(FnMem *mem);
int     symtab_insert(SymTab *self, char *key, int len, void *obj);
int     symtab_hash(char *key, int len);
void   *symtab_remove(SymTab *self, char *key, int len);
void   *symtab_lookup(SymTab *self, char *key, int len);
void    entry_dispose(Entry *self, FnMem *mem);
void    symtab_dispose(SymTab *self);

#endif
