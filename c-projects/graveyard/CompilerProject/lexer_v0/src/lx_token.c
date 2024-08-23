#include "../lib/lx_token.h"
#include <stdbool.h>

static char keywords[32][10] = {
    {"auto"},     {"break"},   {"case"},   {"char"},     {"const"},
    {"continue"}, {"default"}, {"do"},     {"double"},   {"else"},
    {"enum"},     {"extern"},  {"float"},  {"for"},      {"goto"},
    {"if"},       {"int"},     {"long"},   {"register"}, {"return"},
    {"short"},    {"signed"},  {"sizeof"}, {"static"},   {"struct"},
    {"switch"},   {"typedef"}, {"union"},  {"unsigned"}, {"void"},
    {"volatile"}, {"while"}};

static TokenKind KeywordsKind[32] = {
    TOKEN_KWORD_AUTO,     TOKEN_KWORD_BREAK,    TOKEN_KWORD_CASE,
    TOKEN_KWORD_CHAR,     TOKEN_KWORD_CONST,    TOKEN_KWORD_CONTINUE,
    TOKEN_KWORD_DEFAULT,  TOKEN_KWORD_DO,       TOKEN_KWORD_DOUBLE,
    TOKEN_KWORD_ELSE,     TOKEN_KWORD_ENUM,     TOKEN_KWORD_EXTERN,
    TOKEN_KWORD_FLOAT,    TOKEN_KWORD_FOR,      TOKEN_KWORD_GOTO,
    TOKEN_KWORD_IF,       TOKEN_KWORD_INT,      TOKEN_KWORD_LONG,
    TOKEN_KWORD_REGISTER, TOKEN_KWORD_RETURN,   TOKEN_KWORD_SHORT,
    TOKEN_KWORD_SIGNED,   TOKEN_KWORD_SIZEOF,   TOKEN_KWORD_STATIC,
    TOKEN_KWORD_STRUCT,   TOKEN_KWORD_SWITCH,   TOKEN_KWORD_TYPEDEF,
    TOKEN_KWORD_UNION,    TOKEN_KWORD_UNSIGNED, TOKEN_KWORD_VOID,
    TOKEN_KWORD_VOLATILE, TOKEN_KWORD_WHILE,
};

static int KeywordsSize[32] = {
    0, 0, 0, 1, 0, 0, 0, 0, 8, 0, 2, 0, 4, 0, 0, 0,
    4, 8, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
};

static int operator[255][1] = {
    ['*'][0] = TOKEN_OPE_MULT,
    ['-'][0] = TOKEN_OPE_MULT,
    ['/'][0] = TOKEN_OPE_DIV,
    ['%'][0] = TOKEN_OPE_MULT,
    ['!'][0] = TOKEN_OPE_NOT,
    ['~'][0] = TOKEN_OPE_MULT,
    ['&'][0] = TOKEN_OPE_AND,
    ['|'][0] = TOKEN_OPE_MULT,
    ['^'][0] = TOKEN_OPE_OR,
    ['?'][0] = TOKEN_OPE_MULT,
    ['('][0] = TOKEN_OPE_LEFT_PARENTHESE,
    [')'][0] = TOKEN_OPE_RIGHT_PARENTHESE,
    ['['][0] = TOKEN_OPE_LEFT_BRACKET,
    [']'][0] = TOKEN_OPE_RIGHT_BRACKET,
    ['<'][0] = TOKEN_OPE_LESS_THAN,
    ['>'][0] = TOKEN_OPE_GREATER_THAN,
    ['.'][0] = TOKEN_OPE_DOT,
};

static int punctuator[255][1] = {
    [';'][0] = TOKEN_PUN_SEMI_COLON, [':'][0] = TOKEN_PUN_COLON,
    ['{'][0] = TOKEN_PUN_OPEN_BRACK, ['}'][0] = TOKEN_PUN_CLOSE_BRACK,
    ['\''][0] = TOKEN_PUN_SQUOTE,    ['"'][0] = TOKEN_PUN_DQUOTE,
};

Token *token_make(Scanner *scan, FnMem *mem)
{
	Token *token;

	token = mem->alloc(1, sizeof(Token));
	if (!token)
		return (NULL);
	token->ptr = &scan->content[scan->cursor];
	token->row_start = scan->begline;
	token->col_start = scan->cursor - scan->begline;
	token->kind = token_kind(token, scan);
	return (token);
}

int tokncmp(char *token1, char *token2, int n)
{
	while (*token1 && *token1 == *token2 && --n)
	{
		token1++;
		token2++;
	}
	return (*token1 - *token2);
}

int is_alpha(int ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

int is_ascii(int ch)
{
	return (ch >= 0 && ch <= 127);
}

int is_digit(int ch)
{
	return (ch >= '0' && ch <= '9');
}

int is_alnum(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (true);
	if (ch >= '0' && ch <= '9')
		return (true);
	return (false);
}

int is_space(int ch)
{
	if (ch == ' ' || ch == '\r' || ch == '\v')
		return (true);
	if (ch == '\f' || ch == '\t' || ch == '\n')
		return (true);
	return (false);
}

int is_newln(int ch)
{
	return (ch == '\n');
}

int is_identifier_start(int ch)
{
	return (is_alpha(ch) || ch == '_');
}

int is_identifier_inside(int ch)
{
	return (is_alnum(ch) || ch == '_');
}

int is_punctuator(int ch)
{
	return (punctuator[ch][0]);
}

int is_operator(int ch)
{
	return (operator[ch][0]);
}

int is_directive(int ch)
{
	return (ch == '#');
}

int is_keyword(Token *token)
{
	int i;

	i = 0;
	while (i < 32)
	{
		if (tokncmp(keywords[i], token->ptr, token->ptr_len) == 0)
		{
			token->kind = KeywordsKind[i];
			token->kind_size = KeywordsSize[i];
			return (true);
		}
		++i;
	}
	return (false);
}

int is_comment_start(int ch1, int ch2)
{
	if (ch1 == '/')
	{
		if (ch2 == '/')
			return (true);
		if (ch2 == '*')
			return (true);
	}
	else if (ch1 == '*')
	{
		if (ch2 == '/')
			return (true);
	}
	return (false);
}

int is_single_comment(int ch1, int ch2)
{
	return (ch1 == '/' && ch2 == '/');
}

int is_multi_comment(int ch1, int ch2)
{
	return (ch1 == '/' && ch2 == '*');
}

int is_error(int ch);

TokenKind token_kind(Token *token, Scanner *scan)
{
	int ch1;
	int ch2;

	ch1 = scanner_curr(scan);
	ch2 = scanner_next(scan);

	if (is_directive(ch1))
	{
		token->kind = TOKEN_DIRECTIVE;
		token->ptr_len += 1;
		token->col_end += 1;
		scanner_consume(scan);
		while ((ch1 = scanner_curr(scan)) != EOF)
		{
			token->ptr_len += 1;
			token->col_end += 1;
			scanner_consume(scan);
			if (is_newln(ch1))
				break;
		}
		return (TOKEN_DIRECTIVE);
	}

	if (is_comment_start(ch1, ch2))
	{
		token->kind = TOKEN_COMMENT;
		token->ptr_len += 2;
		token->col_end += 2;
		scanner_consume(scan);
		if (is_single_comment(ch1, ch2))
		{
			while ((ch1 = scanner_curr(scan)) != EOF)
			{
				token->ptr_len += 1;
				token->col_end += 1;
				if (is_newln(ch1))
					break;
				scanner_consume(scan);
			}
			scanner_consume(scan);
			return (TOKEN_COMMENT);
		}
		else if (is_multi_comment(ch1, ch2))
		{
			while ((ch1 = scanner_curr(scan)) != EOF)
			{
				ch2 = scanner_next(scan);
				token->ptr_len += 1;
				token->col_end += 1;
				if (ch1 == '*' && ch2 == '/')
					break;
				scanner_consume(scan);
			}
			token->row_end = scan->line;
			scanner_consume(scan);
			scanner_consume(scan);
			return (TOKEN_COMMENT);
		}
		return (TOKEN_ERROR);
	}

	if (is_operator(ch1))
	{
		token->kind = TOKEN_OPERATOR;
		token->ptr_len += 1;
		token->col_end += 1;
		scanner_consume(scan);
		if (is_operator(ch2))
			return (TOKEN_OPERATOR);
	}

	if (is_punctuator(ch1))
	{
		token->kind = TOKEN_PUNCTUATOR;
		token->ptr_len += 1;
		token->col_end += 1;
		scanner_consume(scan);
		return (TOKEN_PUNCTUATOR);
	}

	if (is_digit(ch1) || ch1 == '-')
	{
		token->kind = TOKEN_NUMBER;
		token->ptr_len += 1;
		token->col_end += 1;
		scanner_consume(scan);

		while ((ch1 = scanner_curr(scan)) != EOF)
		{
			if (!is_digit(ch1) && ch1 != '.')
				break;
			token->ptr_len += 1;
			token->col_end += 1;
			scanner_consume(scan);
		}
		return (TOKEN_NUMBER);
	}

	if (is_identifier_start(ch1))
	{
		token->kind = TOKEN_IDENTIFIER;
		token->ptr_len += 1;
		token->col_end += 1;
		scanner_consume(scan);
		while ((ch1 = scanner_curr(scan)) != EOF)
		{
			if (!is_identifier_inside(ch1))
				break;
			token->ptr_len += 1;
			token->col_end += 1;
			scanner_consume(scan);
		}

		if (is_keyword(token))
			return (token->kind);

		return (TOKEN_IDENTIFIER);
	}

	token->ptr_len += 1;
	token->col_end += 1;
	scanner_consume(scan);
	return (TOKEN_ERROR);
}
