#include "../lib/lex_driver.h"
#include <assert.h>
#include <stdio.h>

char str[11][17] = {
    {"TOKEN_END"},        {"TOKEN_UNKOWN"},    {"TOKEN_IGNORE"},
    {"TOKEN_IDENTIFIER"}, {"TOKEN_DIRECTIVE"}, {"TOKEN_OPERATOR"},
    {"TOKEN_NUMBER"},     {"TOKEN_LITERAL"},   {"TOKEN_PUNCTUATOR"},
    {"TOKEN_COMMENT"},    {"TOKEN_KEYWORD"}};

int driver_init_lexing_process(char *path)
{
	FnMem     *mem;
	File      *file;
	Scanner   *scan;
	Fsm       *fsm;
	Tokenizer *tok;
	SymTab    *tab;

	if (!path)
		return (fprintf(stderr, "Error : Path is NULL !\n"));
	mem = mem_init();
	if (!mem)
		return (fprintf(stderr, "Error : Mem initialization failed "
		                        "!\n"));

	file = file_init(path, mem);
	if (!file)
		return (fprintf(stderr, "Error : File initialization failed : %s may not exist\n", path));

	scan = scanner_init(mem->borrow((void **) &file->content), file->size, mem);
	if (!scan)
		return (fprintf(stderr, "Error : Scanner initialization failed "
		                        "!\n"));

	fsm = fsm_init(mem);
	if (!fsm)
		return (fprintf(stderr, "Error : Fsm initialization failed "
		                        "!\n"));
	tab = symtab_init(mem);
	assert(tab != NULL);
	if (!tab)
		return (fprintf(stderr, "Error : SymTab initialization failed "
		                        "!\n"));

	tok = tokenizer_init(scan, fsm, mem, tab);
	assert(tok != NULL);
	if (!tok)
		return (fprintf(stderr, "Error : Tokenizer initialization "
		                        "failed !\n"));

	Token *token = tokenizer_consume(tok);
	assert(token != NULL);
	printf("(%d,%d)", token->start_line, token->start_col);
	printf(" %s ", str[token->kind]);
	printf("(%d,%d)", token->end_line, token->end_col);
	write(1, token->ptr, token->ptr_len);
	token = tokenizer_consume(tok);
	assert(token != NULL);
	printf("(%d,%d)", token->start_line, token->start_col);
	printf(" %s ", str[token->kind]);
	printf("(%d,%d)", token->end_line, token->end_col);
	write(1, token->ptr, token->ptr_len);
	token = tokenizer_consume(tok);
	assert(token != NULL);
	printf("(%d,%d)", token->start_line, token->start_col);
	printf(" %s ", str[token->kind]);
	printf("(%d,%d)", token->end_line, token->end_col);
	write(1, token->ptr, token->ptr_len);

	assert(tok != NULL);
	assert(fsm != NULL);
	assert(scan != NULL);
	assert(file != NULL);
	assert(mem != NULL);
	assert(tab != NULL);

	fsm_dispose(fsm);
	scanner_dispose(scan);
	file_dispose(file);
	// symtab_dispose(tab);
	tokenizer_dispose(tok);
	mem_dispose(mem);

	return (1);
}

int main(int argc, char **argv)
{
	(void) argv;
	if (argc >= 2)
	{
		driver_init_lexing_process("test.c");
	}

	return (EXIT_SUCCESS);
}
