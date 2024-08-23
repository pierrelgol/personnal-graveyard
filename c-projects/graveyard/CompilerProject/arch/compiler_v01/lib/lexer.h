#ifndef LEXER_H
#define LEXER_H


typedef struct
{
	int   size;
	int   line;
	int   cursor;
	int   begline;
	char *stream;

} Lexer;

Lexer *lexer_init(char *content, int size);
Lexer *lexer_dispose(Lexer *self);
int    lexer_eat_char(Lexer *self);
Token *lexer_consume(Lexer *self);

#endif
