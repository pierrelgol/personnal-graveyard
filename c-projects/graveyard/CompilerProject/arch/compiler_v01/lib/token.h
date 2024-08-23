#ifndef TOKEN_H
#define TOKEN_H

#include <stdlib.h>

typedef enum
{
	TOKEN_END = 256,
	TOKEN_PONCTUATOR,
	TOKEN_IDENTIFIER,
	TOKEN_PREPROC,
	TOKEN_KEYWORD,
	TOKEN_OPERATOR,
	TOKEN_LITERAL,
	TOKEN_SYMBOL,
	TOKEN_NUMBER,
	TOKEN_NEWLINE,
	TOKEN_COMMENT,
	TOKEN_UNRESOLVED,

} TokenKind;

typedef struct
{
	TokenKind kind;
	int       col;
	int       line;
	int       len;
	char     *path;
	char     *text;

} Token;

#include "lexer.h"

Token    *token_find_next_token(Lexer *lex);
TokenKind token_find_identity(Token *self, Lexer *lex);
int token_istoken_identifier(Token *self,Lexer *lex);

#endif
