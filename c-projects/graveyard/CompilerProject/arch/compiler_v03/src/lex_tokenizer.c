#include "../lib/lex_tokenizer.h"
#include <stdio.h>

Tokenizer *tokenizer_init(Scanner *scan, Fsm *fsm, FnMem *mem, SymTab *tab)
{
	assert(scan != NULL);
	assert(fsm != NULL);
	assert(mem != NULL);

	Tokenizer *self;

	self = mem->alloc(1, sizeof(Tokenizer));
	assert(self != NULL);

	self->scan = scan;
	self->fsm = fsm;
	self->mem = mem;
	self->tab = tab;

	return (self);
}

Token *tokenizer_consume(Tokenizer *self)
{
	Token *tok;

	tok = tokenizer_build_token(self);
	tok->kind = tokenizer_identify(self);
	return (tok);
}

Token *tokenizer_next(Tokenizer *self);
Token *tokenizer_peek(Tokenizer *self, int index);

TokenKind tokenizer_identify(Tokenizer *self)
{
	Scanner *scan;
	Fsm     *fsm;
	int      ch;

	scan = self->scan;
	fsm = self->fsm;
	ch = scanner_curr(scan);
	fsm->get_state(ch);
	printf("%d", fsm->curr);

	if (fsm->curr == STATE_IDENTIFIER)
	{
		self->curr->end_col += 1;
		self->curr->ptr_len += 1;
		while ((ch = scanner_curr(scan)) != EOF)
		{
			fsm->get_state(ch);
			scanner_consume(scan);
			if (fsm->curr != STATE_IDENTIFIER && fsm->curr != STATE_NUMBER)
				break;
			self->curr->ptr_len += 1;
			self->curr->end_col += 1;
		}
		return (TOKEN_IDENTIFIER);
	}

	if (fsm->curr == STATE_DIRECTIVE)
	{
		ch = scanner_consume(scan);
		self->curr->ptr_len += 1;
		self->curr->end_col += 1;
		return (TOKEN_DIRECTIVE);
	}

	if (fsm->curr == STATE_NUMBER)
	{
		self->curr->ptr_len += 1;
		self->curr->end_col += 1;
		while ((ch = scanner_curr(scan)) != EOF)
		{
			fsm->get_state(ch);
			scanner_consume(scan);
			if (fsm->curr != STATE_NUMBER)
				break;
			self->curr->ptr_len += 1;
			self->curr->end_col += 1;
		}
		return (TOKEN_NUMBER);
	}

	ch = scanner_consume(scan);
	return (TOKEN_UNKNOWN);
}

Token *tokenizer_build_token(Tokenizer *self)
{
	Token *tok;

	tok = token_init(self->mem);
	scanner_trim(self->scan);
	tok->start_line = self->scan->line;
	tok->start_col = self->scan->cursor - self->scan->begline;
	tok->ptr = &self->scan->content[self->scan->cursor];
	self->curr = tok;
	return (tok);
}

void tokenizer_dispose(Tokenizer *self)
{
	assert(self != NULL);
	assert(self->mem != NULL);

	if (self)
	{
		self->mem->dealloc(self);
	}
}
