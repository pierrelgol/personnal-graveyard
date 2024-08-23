#ifndef LEX_TOKENIZER_H
#define LEX_TOKENIZER_H

#include "lex_fsm.h"
#include "lex_memory.h"
#include "lex_scanner.h"
#include "lex_symtab.h"
#include "lex_token.h"
#include <assert.h>

typedef struct
{
	Token   *prev;
	Token   *curr;
	Token   *next;
	Scanner *scan;
	Fsm     *fsm;
	FnMem   *mem;
	SymTab  *tab;

} Tokenizer;

Tokenizer *tokenizer_init(Scanner *scan, Fsm *fsm, FnMem *mem, SymTab *tab);
Token     *tokenizer_consume(Tokenizer *self);
Token     *tokenizer_next(Tokenizer *self);
Token     *tokenizer_peek(Tokenizer *self, int index);

TokenKind tokenizer_identify(Tokenizer *self);
Token    *tokenizer_build_token(Tokenizer *self);
void      tokenizer_dispose(Tokenizer *self);

#endif
