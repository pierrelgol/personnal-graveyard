#ifndef LEXER_H
#define LEXER_H

#include <stdlib.h>
#include <stdio.h>

typedef enum
{
	TOKEN_END = 0,
	TOKEN_IDENTIFIER,
	TOKEN_OPERATOR,
	TOKEN_NUMBER,
	TOKEN_LITERAL,
	TOKEN_PUNCTUATOR,
	TOKEN_KEYWORD,

} TokenKind;

typedef struct
{
	int   size;
	char *ptr;

} Slice;

typedef struct
{
	TokenKind   kind;
	int         line;
	int         col;
	int         len;
	Slice       slice;
	const char *path;
} Token;

typedef struct
{
	int   line;
	int   size;
	int   cursor;
	int   begline;
	char *content;

} Lexer;

Lexer *lexer_init(char *stream, int stream_size);
int lexer_eat_character(Lexer *self);
int lexer_next_character(Lexer *self);
int lexer_prev_character(Lexer *self);
int lexer_peek_character(Lexer *self, int index);
Lexer *lexer_dispose(Lexer *self);

#endif