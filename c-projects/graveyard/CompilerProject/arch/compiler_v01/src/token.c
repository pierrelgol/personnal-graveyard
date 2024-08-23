#include "../lib/token.h"
#include "../lib/helper.h"

Token *token_find_next_token(Lexer *lex)
{
	Token *self;

	if (!lex)
		return (NULL);
	self = (Token*) calloc(1, sizeof(Token));
	self->len = 0;
	self->text = &lex->stream[lex->cursor];
	self->kind = token_find_identity(self, lex);
	if (self->kind == TOKEN_UNRESOLVED)
	{
		
	}
	return (self);
}

TokenKind token_find_identity(Token *token, Lexer *lex)
{
	if (token_istoken_identifier(token, lex))
		return (TOKEN_IDENTIFIER);	
	if (lex->stream[lex->cursor] == '\0')
		return (TOKEN_END);
	else
		return (TOKEN_UNRESOLVED);
}

int	token_istoken_identifier(Token *token, Lexer *lex)
{
	if (help_isalpha(lex->stream[lex->cursor]) || lex->stream[lex->cursor] == '_')
	{
		while ((token->len + lex->cursor) < lex->size && (help_isalnum(lex->stream[lex->cursor]) || lex->stream[lex->cursor] == '_'))
		{
			token->len += 1;
		}
		return (1);
	}
	return (0);
}
