#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 128

enum TokenKind
{
	TOKEN_KEYWORD,
};

typedef struct s_entry
{
	int   data;
	char *key;

} Entry_t;

typedef struct s_table
{
	Entry_t *table;

} Table_t;

Table_t *table_init(void)
{
	Table_t *self;

	self = (Table_t *) calloc(1, sizeof(Table_t));
	if (!self)
		return (NULL);
	self->table = (Entry_t *) calloc(TABLE_SIZE + 1, sizeof(Entry_t));
	if (!self->table)
	{
		free(self);
		return (NULL);
	}
	self->table[TABLE_SIZE].data = 0;
	self->table[TABLE_SIZE].key = NULL;
	return (self);
}

int table_hash(char *key)
{
	unsigned index;

	index = strlen(key);
	index = ((key[index - 1] * key[0]) % TABLE_SIZE);
	return (index);
}

void table_insert(Table_t *ht, Entry_t *entry)
{
	int hash = table_hash(entry->key);
	if (ht->table[hash].key != NULL)
	{
		while (ht->table[hash].key != NULL && hash < TABLE_SIZE)
			hash++;
	}
	ht->table[hash].key = entry->key;
	ht->table[hash].data = entry->data;
}

int table_lookup(Table_t *ht, char *key)
{
	int index = table_hash((key));
	if (ht->table[index].key == NULL)
	{
		while (index < TABLE_SIZE && ht->table[index].key == NULL)
		{
			index++;
		}
	}
	return (ht->table[index].data);
}

void table_print(Table_t *ht)
{
	int count;

	count = 0;
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		count += ht->table[i].data;
		printf("{%s:%d}\n", ht->table[i].key, ht->table[i].data);
	}
	printf("Key = %d\n", count);
}

int main(void)
{
	Table_t *table;

	table = table_init();
	if (table)
	{
		table_insert(table, &(Entry_t){.data = 1, .key = "if"});
		table_insert(table, &(Entry_t){.data = 1, .key = "else"});
		table_insert(table, &(Entry_t){.data = 1, .key = "while"});
		table_insert(table, &(Entry_t){.data = 1, .key = "for"});
		table_insert(table, &(Entry_t){.data = 1, .key = "return"});
		table_insert(table, &(Entry_t){.data = 1, .key = "static"});
		table_insert(table, &(Entry_t){.data = 1, .key = "extern"});
		table_insert(table, &(Entry_t){.data = 1, .key = "int"});
		table_insert(table, &(Entry_t){.data = 1, .key = "short"});
		table_insert(table, &(Entry_t){.data = 1, .key = "double"});
		table_insert(table, &(Entry_t){.data = 1, .key = "float"});
		table_insert(table, &(Entry_t){.data = 1, .key = "unsigned"});
		table_insert(table, &(Entry_t){.data = 1, .key = "signed"});
		table_insert(table, &(Entry_t){.data = 1, .key = "void"});
		table_insert(table, &(Entry_t){.data = 1, .key = "long"});
		table_insert(table, &(Entry_t){.data = 1, .key = "sizeof"});
		table_insert(table, &(Entry_t){.data = 1, .key = "const"});
		table_insert(table, &(Entry_t){.data = 1, .key = "volatile"});

		table_print(table);
	}
}
