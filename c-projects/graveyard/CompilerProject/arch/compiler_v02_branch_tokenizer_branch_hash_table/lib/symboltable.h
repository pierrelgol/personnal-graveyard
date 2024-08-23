#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 128

typedef struct node
{
	struct node *next;
	void        *data;

} List;

typedef struct
{
	char  *key;
	union
	{
		struct node *next;
		void        *data;
	};

} Entry;

typedef struct
{
	Entry *table;

} HashTable;


HashTable	*table_init(void);

Entry		*table_insert(void *data);

void		*table_lookup(char *key);


#endif
