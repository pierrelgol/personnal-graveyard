#include "../lib/lex_symtab.h"
#include <string.h>

SymTab *symtab_init(FnMem *mem)
{
	assert(mem != NULL);

	SymTab *self;

	self = (SymTab *) mem->alloc(1, sizeof(SymTab));
	assert(self != NULL);

	self->mem = mem;
	self->size = 0;
	self->capacity = TABLE_BASE_CAP;
	self->table = (Entry **) mem->alloc(TABLE_BASE_CAP, sizeof(Entry *));
	assert(self->table != NULL);

	return (self);
}

int symtab_insert(SymTab *self, char *key, int len, void *obj)
{
	Entry *parent;
	Entry *entry;
	int    index;
	int    i;

	index = symtab_hash(key, len);

	entry = self->mem->alloc(1, sizeof(Entry));
	entry->len = len;
	entry->obj = obj;
	entry->key = self->mem->alloc(len + 1, sizeof(char));
	i = 0;
	while (i < len)
	{
		entry->key[i] = key[i];
		++i;
	}
	entry->key[i] = '\0';
	if (&self->table[0][index] == NULL)
	{
		self->table[0][index] = *entry;
		return (1);
	}
	parent = &self->table[0][index];
	while (parent->next != NULL)
	{
		parent = parent->next;
	}
	parent->next = entry;
	parent->next->next = NULL;

	return (1);
}

void *symtab_lookup(SymTab *self, char *key, int len)
{
	Entry *ptr;
	int    index;

	index = symtab_hash(key, len);

	if (&self->table[0][index] == NULL)
	{
		return (NULL);
	}
	ptr = &self->table[0][index];
	while (ptr && strcmp(ptr->key, key) != 0)
	{
		ptr = ptr->next;
	}
	return (ptr->obj);
}

void *symtab_remove(SymTab *self, char *key, int len)
{
	Entry *temp;
	Entry *ptr;
	void  *obj;
	int    index;

	index = symtab_hash(key, len);
	obj = NULL;
	if (&self->table[0][index] == NULL)
	{
		return (NULL);
	}

	ptr = &self->table[0][index];
	if (strcmp(ptr->key, key) == 0)
	{
		temp = ptr;
		obj = temp->obj;
		ptr = ptr->next;
		self->mem->dealloc(temp->key);
		self->mem->dealloc(temp);
		self->table[0][index] = *ptr;
		return (obj);
	}

	ptr = &self->table[0][index];
	while (ptr->next && strcmp(ptr->next->key, key) != 0)
	{
		ptr = ptr->next;
	}

	if (ptr != NULL)
	{
		temp = ptr->next;
		ptr->next = temp->next;
		obj = temp->obj;
		self->mem->dealloc(temp->key);
		self->mem->dealloc(temp);
	}
	return (obj);
}

int symtab_hash(char *key, int len)
{
	int index;

	index = (key[0] * key[len - 1]) + (TABLE_BASE_CAP * len);
	return (index % TABLE_BASE_CAP);
}

void symtab_dispose(SymTab *self)
{
	assert(self != NULL);
	assert(self->mem != NULL);
	assert(self->table != NULL);

	int index;

	if (self)
	{
		index = 0;
		while (index < self->capacity)
		{
			if (&self->table[0][index] != NULL)
				entry_dispose(&self->table[0][index], self->mem);
			++index;
		}
		self->mem->dealloc(self->table);
		self->mem->dealloc(self);
	}
}

void entry_dispose(Entry *self, FnMem *mem)
{
	if (!self)
		return;
	entry_dispose(self->next, mem);
	if (self->key != NULL)
		mem->dealloc(self->key);
	mem->dealloc(self);
}
