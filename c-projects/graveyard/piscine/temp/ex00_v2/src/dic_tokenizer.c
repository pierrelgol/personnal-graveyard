#include "../lib/dic_tokenizer.h"
#include "../lib/dic_help.h"

int	tokenizer_tokenize(t_lexer *lex)
{
	return (tcount);
}

void	tokenizer_tok(t_token *tok, char *src, int line)
{
	tok->type = tokenizer_identify(src);
	tok->line = line;
	tok->len = tokenizer_toklen(src);
	tok->content = (char *) malloc(sizeof(char) * tok->len + 1);
	help_strncpy(tok->content, src, tok->len);
}

t_type	tokenizer_identify(char *source)
{
	t_type	identity;
	char	*psrc;

	identity = DEFF;
	psrc = source;
	while (*psrc && ((!help_isspace(*psrc)) || *psrc != ':'))
		++psrc;
	if (*psrc == ':')
		identity = NUMB;
	else if (*psrc == '\n')
		identity = WORD;
	else
		identity = DEFF;
	return (identity);
}

int	tokenizer_toklen(char *source)
{
	char *psrc;

	if (!source)
		return (0);
	psrc = source;
	while (*psrc && !help_isspace(*psrc))
		++psrc;
	return (psrc - source);
}
