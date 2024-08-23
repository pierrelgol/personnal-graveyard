#include "../lib/bsq_config.h"
#include "../lib/bsq_log.h"


bool	config_extract(t_config *self, t_file *file)
{
	while(file->data[self->offset] >= '0' && file->data[self->offset] <= '9' )
		self->lines = (file->data[self->offset++] - '0') + (self->lines * 10);

	self->empt = file->data[self->offset++];
	self->obst = file->data[self->offset++];
	self->full = file->data[self->offset++];
	self->offset += 1;

	while(file->data[self->offset + self->lcol++] != '\n');

	config_check(self);
	config_match(self, file);

	return(self->is_valid);
}


void	config_check(t_config *c)
{
	if(c->empt == c->obst || c->empt == c->full || c->full == c->obst)
		c->is_valid = false;
	else if(c->empt < 32 || c->obst < 32 || c->full < 32)
		c->is_valid = false;
	else if(c->empt > 127 || c->obst > 127 || c->full > 127)
		c->is_valid = false;
	else if(c->lines == 0)
		c->is_valid = false;
	else
		c->is_valid = true;
}


void	config_match(t_config *c, t_file *file)
{
	int 	index;
	char	ch;

	index  = 0;
	while(index < file->count && c->lrow < c->lines && c->is_valid == true)
	{
		ch = file->data[index + c->offset];
		if(ch == c->empt || ch == c->obst || ch == '\n' || ch == '\0')
			c->is_valid = true;
		else
			c->is_valid = false;
		if(ch == '\n')
			c->lrow++;
		++index;
	}	
	if((c->lcol * c->lrow + c->offset) != file->count)
		c->is_valid = false;
}
