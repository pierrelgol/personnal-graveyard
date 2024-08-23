#include "../lib/lx_driver.h"
#include <stdio.h>

TokenPrint lookup[255] = {
    [TOKEN_END].str = "END",
    [TOKEN_ERROR].str = "ERROR",
    [TOKEN_DIRECTIVE].str = "DIRECTIVE",
    [TOKEN_IDENTIFIER].str = "IDENTIFIER",
    [TOKEN_COMMENT].str = "COMMENT",
    [TOKEN_LITERAL].str = "LITERAL",
    [TOKEN_NUMBER].str = "NUMBER",
    [TOKEN_PUNCTUATOR].str = "PUNCTUATOR",
    [TOKEN_OPERATOR].str = "OPERATOR",
    [TOKEN_KEYWORD].str = "KEYWORD",
    [TOKEN_OPE_PLUS].str = "OP_PLUS",
    [TOKEN_OPE_MINUS].str = "OP_MINUS",
    [TOKEN_OPE_MULT].str = "OP_MULTI",
    [TOKEN_OPE_DIV].str = "OP_DIV",
    [TOKEN_OPE_MOD].str = "OP_MOD",
    [TOKEN_OPE_NOT].str = "OP_NOT",
    [TOKEN_OPE_TILDA].str = "OP_TILDA",
    [TOKEN_OPE_AND].str = "OP_AND",
    [TOKEN_OPE_OR].str = "OP_OR",
    [TOKEN_OPE_XOR].str = "OR_XOR",
    [TOKEN_OPE_QUESTIONMARK].str = "OP_QUESTIONMARK",
    [TOKEN_OPE_LEFT_PARENTHESE].str = "OP_LEFT_PAR",
    [TOKEN_OPE_RIGHT_PARENTHESE].str = "OP_RIGHT_PAR",
    [TOKEN_OPE_LEFT_BRACKET].str = "OP_LEFT_BRACK",
    [TOKEN_OPE_RIGHT_BRACKET].str = "OP_RIGHT_BRACK",
    [TOKEN_OPE_LESS_THAN].str = "OP_LESS_THAN",
    [TOKEN_OPE_GREATER_THAN].str = "OP_MORE_THAN",
    [TOKEN_OPE_DOT].str = "OP_DOT",
    [TOKEN_OPE_PLUS_EQUAL].str = "EQ_PLUS",
    [TOKEN_OPE_MINUS_EQUAL].str = "EQ_MINUS",
    [TOKEN_OPE_MULT_EQUAL].str = "EQ_MULT",
    [TOKEN_OPE_DIV_EQUAL].str = "EQ_DIV",
    [TOKEN_OPE_MOD_EQUAL].str = "EQ_MOD",
    [TOKEN_OPE_NOT_EQUAL].str = "EQ_NOT",
    [TOKEN_OPE_AND_EQUAL].str = "EQ_AND",
    [TOKEN_OPE_OR_EQUAL].str = "EQ_OR",
    [TOKEN_OPE_XOR_EQUAL].str = "EQ_XOR",
    [TOKEN_OPE_TILDA_EQUAL].str = "EQ_TILDA",
    [TOKEN_OPE_PLUSPLUS].str = "OP_PLUS_PLUS",
    [TOKEN_OPE_MINUSMINUS].str = "OP_MINUS_MINUS",
    [TOKEN_OPE_LOGICAL_AND].str = "OP_LOGAND",
    [TOKEN_OPE_LOGICAL_OR].str = "OP_LOGOR",
    [TOKEN_OPE_LOGICAL_XOR].str = "OP_LOGXOR",
    [TOKEN_OPE_LOGICAL_EQUAL].str = "OP_LOGEQ",
    [TOKEN_KWORD_AUTO].str = "AUTO",
    [TOKEN_KWORD_BREAK].str = "BREAK",
    [TOKEN_KWORD_CASE].str = "CASE",
    [TOKEN_KWORD_CHAR].str = "CHAR",
    [TOKEN_KWORD_CONST].str = "CONST",
    [TOKEN_KWORD_CONTINUE].str = "CONTINUE",
    [TOKEN_KWORD_DEFAULT].str = "DEFAULT",
    [TOKEN_KWORD_DO].str = "DO",
    [TOKEN_KWORD_DOUBLE].str = "DOUBLE",
    [TOKEN_KWORD_ELSE].str = "ELSE",
    [TOKEN_KWORD_ENUM].str = "ENUM",
    [TOKEN_KWORD_EXTERN].str = "EXTERN",
    [TOKEN_KWORD_FLOAT].str = "FLOAT",
    [TOKEN_KWORD_FOR].str = "FOR",
    [TOKEN_KWORD_GOTO].str = "GOT",
    [TOKEN_KWORD_IF].str = "IF",
    [TOKEN_KWORD_INT].str = "INT",
    [TOKEN_KWORD_LONG].str = "LONG",
    [TOKEN_KWORD_REGISTER].str = "REGISTER",
    [TOKEN_KWORD_RETURN].str = "RETURN",
    [TOKEN_KWORD_SHORT].str = "SHORT",
    [TOKEN_KWORD_SIGNED].str = "SIGNED",
    [TOKEN_KWORD_SIZEOF].str = "SIZEOF",
    [TOKEN_KWORD_STATIC].str = "STATIC",
    [TOKEN_KWORD_STRUCT].str = "STRUCT",
    [TOKEN_KWORD_SWITCH].str = "SWITCH",
    [TOKEN_KWORD_TYPEDEF].str = "TYPEDEF",
    [TOKEN_KWORD_UNION].str = "UNION",
    [TOKEN_KWORD_UNSIGNED].str = "UNSIGNED",
    [TOKEN_KWORD_VOID].str = "VOID",
    [TOKEN_KWORD_VOLATILE].str = "VOLATILE",
    [TOKEN_KWORD_WHILE].str = "WHILE",

};

void driver_print_token(Token *tok)
{
	if (tok->kind != TOKEN_ERROR)
		printf("<%s>%.*s\n", lookup[tok->kind].str, tok->ptr_len, tok->ptr);
}

void driver_start_process(char *path)
{
	FnMem   *mem;
	File    *file;
	Scanner *scan;
	Token   *tok;

	mem = mem_init();
	if (!mem)
		return;
	file = file_init(path, mem);
	if (!file)
		return;
	scan = scanner_init(mem->borrow((void **) &file->content), file->size, mem);
	if (!scan)
		return;

	do
	{
		tok = token_make(scan, mem);
		driver_print_token(tok);
		free(tok);
	} while (scan->cursor < scan->size);

	// write(1, scan->content, scan->size);

	scanner_dispose(scan);
	file_dispose(file);
	mem_dispose(mem);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		driver_start_process(argv[1]);
	}

	return (0);
}
