#ifndef LEX_TOKEN_H
#define LEX_TOKEN_H

#include "lex_memory.h"
#include "lex_symtab.h"
#include <assert.h>

typedef enum
{
	TOKEN_END = 0,
	TOKEN_UNKNOWN,
	TOKEN_IGNORE,
	TOKEN_IDENTIFIER,
	TOKEN_DIRECTIVE,
	TOKEN_OPERATOR,
	TOKEN_NUMBER,
	TOKEN_LITERAL,
	TOKEN_PUNCTUATOR,
	TOKEN_COMMENT,
	TOKEN_KEYWORD,

} TokenKind;

typedef struct
{
	TokenKind   kind;
	int         start_line;
	int         start_col;
	int         end_line;
	int         end_col;
	int         ptr_len;
	char       *ptr;
	const char *path;
} Token;

Token *token_init(FnMem *mem);
void   token_dispose(Token *self, FnMem *mem);

#endif
