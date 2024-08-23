#ifndef LX_TOKEN_H
#define LX_TOKEN_H

#include "lx_memory.h"
#include "lx_scanner.h"

typedef enum
{
	TOKEN_END = 0,
	TOKEN_ERROR,
	TOKEN_DIRECTIVE,
	TOKEN_IDENTIFIER,
	TOKEN_COMMENT,
	TOKEN_LITERAL,
	TOKEN_NUMBER,
	TOKEN_PUNCTUATOR,
	TOKEN_OPERATOR,
	TOKEN_KEYWORD,

	TOKEN_OPE_PLUS,
	TOKEN_OPE_MINUS,
	TOKEN_OPE_MULT,
	TOKEN_OPE_DIV,
	TOKEN_OPE_MOD,
	TOKEN_OPE_NOT,
	TOKEN_OPE_TILDA,
	TOKEN_OPE_AND,
	TOKEN_OPE_OR,
	TOKEN_OPE_XOR,
	TOKEN_OPE_QUESTIONMARK,
	TOKEN_OPE_LEFT_PARENTHESE,
	TOKEN_OPE_RIGHT_PARENTHESE,
	TOKEN_OPE_LEFT_BRACKET,
	TOKEN_OPE_RIGHT_BRACKET,
	TOKEN_OPE_LESS_THAN,
	TOKEN_OPE_GREATER_THAN,
	TOKEN_OPE_DOT,

	TOKEN_OPE_PLUS_EQUAL,
	TOKEN_OPE_MINUS_EQUAL,
	TOKEN_OPE_MULT_EQUAL,
	TOKEN_OPE_DIV_EQUAL,
	TOKEN_OPE_MOD_EQUAL,
	TOKEN_OPE_NOT_EQUAL,
	TOKEN_OPE_AND_EQUAL,
	TOKEN_OPE_OR_EQUAL,
	TOKEN_OPE_XOR_EQUAL,
	TOKEN_OPE_TILDA_EQUAL,

	TOKEN_OPE_PLUSPLUS,
	TOKEN_OPE_MINUSMINUS,
	TOKEN_OPE_LOGICAL_AND,
	TOKEN_OPE_LOGICAL_OR,
	TOKEN_OPE_LOGICAL_XOR,
	TOKEN_OPE_LOGICAL_EQUAL,

	TOKEN_PUN_SEMI_COLON,
	TOKEN_PUN_COLON,
	TOKEN_PUN_OPEN_BRACK,
	TOKEN_PUN_CLOSE_BRACK,
	TOKEN_PUN_COMMA,
	TOKEN_PUN_SQUOTE,
	TOKEN_PUN_DQUOTE,

	TOKEN_KWORD_AUTO,
	TOKEN_KWORD_BREAK,
	TOKEN_KWORD_CASE,
	TOKEN_KWORD_CHAR,
	TOKEN_KWORD_CONST,
	TOKEN_KWORD_CONTINUE,
	TOKEN_KWORD_DEFAULT,
	TOKEN_KWORD_DO,
	TOKEN_KWORD_DOUBLE,
	TOKEN_KWORD_ELSE,
	TOKEN_KWORD_ENUM,
	TOKEN_KWORD_EXTERN,
	TOKEN_KWORD_FLOAT,
	TOKEN_KWORD_FOR,
	TOKEN_KWORD_GOTO,
	TOKEN_KWORD_IF,
	TOKEN_KWORD_INT,
	TOKEN_KWORD_LONG,
	TOKEN_KWORD_REGISTER,
	TOKEN_KWORD_RETURN,
	TOKEN_KWORD_SHORT,
	TOKEN_KWORD_SIGNED,
	TOKEN_KWORD_SIZEOF,
	TOKEN_KWORD_STATIC,
	TOKEN_KWORD_STRUCT,
	TOKEN_KWORD_SWITCH,
	TOKEN_KWORD_TYPEDEF,
	TOKEN_KWORD_UNION,
	TOKEN_KWORD_UNSIGNED,
	TOKEN_KWORD_VOID,
	TOKEN_KWORD_VOLATILE,
	TOKEN_KWORD_WHILE,

} TokenKind;

typedef struct
{
	TokenKind kind;
	int       row_start;
	int       row_end;
	int       col_start;
	int       col_end;
	int       kind_size;
	int       ptr_len;
	char     *ptr;

} Token;

Token *token_make(Scanner *scan, FnMem *mem);

// first pass

int tokncmp(char *token1, char *token2, int n);
int is_ascii(int ch);
int is_alpha(int ch);
int is_digit(int ch);
int is_alnum(int ch);
int is_space(int ch);
int is_newln(int ch);
int is_directive(int ch);
int is_identifier_start(int ch);
int is_identifier_inside(int ch);
int is_punctuator(int ch);
int is_operator(int ch);
int is_keyword(Token *token);
int is_comment_start(int ch1, int ch2);
int is_single_comment(int ch1, int ch2);
int is_multi_comment(int ch1, int ch2);

int       is_error(int ch);
TokenKind token_kind(Token *token, Scanner *scan);

#endif
