#ifndef TABLE_H
#define TABLE_H

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
	char *key;

	union {
		void *data;		

	}
	
}Entry;

#endif
