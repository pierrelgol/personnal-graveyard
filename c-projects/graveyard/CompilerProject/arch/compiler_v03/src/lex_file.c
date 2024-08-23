#include "../lib/lex_file.h"
#include <assert.h>

File *file_init(const char *path, FnMem *mem)
{
	File *self;

	if (!path)
		return (NULL);
	assert(mem != NULL);
	self = (File *) mem->alloc(1, sizeof(File));
	assert(self != NULL);
	self->path = path;
	self->mem = mem;
	if (!file_stat(self, path))
		return (file_dispose(self));
	if (!(self->content = mem->alloc(self->size + 1, sizeof(char))))
		return (file_dispose(self));
	if (!file_open(self))
		return (file_dispose(self));
	if (!file_read(self))
		return (file_dispose(self));
	assert(self != NULL);
	return (self);
}

int file_stat(File *self, const char *path)
{
	assert(self != NULL);
	assert(path != NULL);

	char *buffer;
	int   byte_read;

	if (!file_open(self))
		return (0);

	buffer = (char[READ_SIZE]){0};
	byte_read = READ_SIZE;
	while (byte_read == READ_SIZE)
	{
		byte_read = read(self->fd, buffer, READ_SIZE);
		self->size += byte_read;
	}
	if (!file_close(self))
		return (0);
	assert(self->open == 0);
	return (1);
}

int file_open(File *self)
{
	assert(self != NULL);
	assert(self->open == 0);

	self->fd = open(self->path, O_RDONLY);

	if (self->fd < 0)
		return (0);

	self->open = 1;
	return (1);
}

int file_close(File *self)
{
	assert(self != NULL);
	assert(self->open == 1);

	self->fd = close(self->fd);
	self->open = 0;
	return (1);
}

int file_read(File *self)
{
	assert(self != NULL);
	assert(self->open == 1);
	assert(self->content != NULL);
	assert(self->size > 0);

	if ((self->size = read(self->fd, self->content, self->size)) <= 0)
		return (0);
	return (1);
}

File *file_dispose(File *self)
{
	assert(self != NULL);
	assert(self->mem != NULL);

	if (self)
	{
		if (self->open)
			file_close(self);
		if (self->content)
			self->mem->dealloc(self->content);
		self->mem->dealloc(self);
	}
	return (NULL);
}
