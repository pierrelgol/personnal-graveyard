#include "../lib/lex_fsm.h"

Fsm *fsm_init(FnMem *mem)
{
	Fsm *self;

	assert(mem != NULL);
	self = (Fsm *) mem->alloc(1, sizeof(Fsm));
	assert(self != NULL);
	self->mem = mem;
	self->curr = STATE_START_OF_FSM;
	self->get_state = fsm_get_state;
	return (self);
}

FsmState fsm_get_state(int ch)
{
	static FsmState table[TABLE_SIZE];

	table['\0'] = STATE_END_OF_FSM;
	table['\t'] = STATE_WHITESPACE;
	table['\v'] = STATE_WHITESPACE;
	table['\f'] = STATE_WHITESPACE;
	table['\r'] = STATE_WHITESPACE;
	table[' '] = STATE_WHITESPACE;
	table['\n'] = STATE_LINE_BREAK;
	table['#'] = STATE_DIRECTIVE;
	table['"'] = STATE_PUNCTUATOR;
	table['{'] = STATE_PUNCTUATOR;
	table['}'] = STATE_PUNCTUATOR;
	table['\''] = STATE_PUNCTUATOR;
	table[';'] = STATE_PUNCTUATOR;
	table[':'] = STATE_PUNCTUATOR;
	table['0'] = STATE_NUMBER;
	table['1'] = STATE_NUMBER;
	table['2'] = STATE_NUMBER;
	table['3'] = STATE_NUMBER;
	table['4'] = STATE_NUMBER;
	table['5'] = STATE_NUMBER;
	table['6'] = STATE_NUMBER;
	table['7'] = STATE_NUMBER;
	table['8'] = STATE_NUMBER;
	table['9'] = STATE_NUMBER;
	table['_'] = STATE_IDENTIFIER;
	table['a'] = STATE_IDENTIFIER;
	table['b'] = STATE_IDENTIFIER;
	table['c'] = STATE_IDENTIFIER;
	table['d'] = STATE_IDENTIFIER;
	table['e'] = STATE_IDENTIFIER;
	table['f'] = STATE_IDENTIFIER;
	table['g'] = STATE_IDENTIFIER;
	table['h'] = STATE_IDENTIFIER;
	table['i'] = STATE_IDENTIFIER;
	table['j'] = STATE_IDENTIFIER;
	table['k'] = STATE_IDENTIFIER;
	table['l'] = STATE_IDENTIFIER;
	table['m'] = STATE_IDENTIFIER;
	table['n'] = STATE_IDENTIFIER;
	table['o'] = STATE_IDENTIFIER;
	table['p'] = STATE_IDENTIFIER;
	table['q'] = STATE_IDENTIFIER;
	table['r'] = STATE_IDENTIFIER;
	table['s'] = STATE_IDENTIFIER;
	table['t'] = STATE_IDENTIFIER;
	table['u'] = STATE_IDENTIFIER;
	table['v'] = STATE_IDENTIFIER;
	table['w'] = STATE_IDENTIFIER;
	table['x'] = STATE_IDENTIFIER;
	table['y'] = STATE_IDENTIFIER;
	table['z'] = STATE_IDENTIFIER;
	table['A'] = STATE_IDENTIFIER;
	table['B'] = STATE_IDENTIFIER;
	table['C'] = STATE_IDENTIFIER;
	table['D'] = STATE_IDENTIFIER;
	table['E'] = STATE_IDENTIFIER;
	table['F'] = STATE_IDENTIFIER;
	table['G'] = STATE_IDENTIFIER;
	table['H'] = STATE_IDENTIFIER;
	table['I'] = STATE_IDENTIFIER;
	table['J'] = STATE_IDENTIFIER;
	table['K'] = STATE_IDENTIFIER;
	table['L'] = STATE_IDENTIFIER;
	table['M'] = STATE_IDENTIFIER;
	table['N'] = STATE_IDENTIFIER;
	table['O'] = STATE_IDENTIFIER;
	table['P'] = STATE_IDENTIFIER;
	table['Q'] = STATE_IDENTIFIER;
	table['R'] = STATE_IDENTIFIER;
	table['S'] = STATE_IDENTIFIER;
	table['T'] = STATE_IDENTIFIER;
	table['U'] = STATE_IDENTIFIER;
	table['V'] = STATE_IDENTIFIER;
	table['W'] = STATE_IDENTIFIER;
	table['X'] = STATE_IDENTIFIER;
	table['Y'] = STATE_IDENTIFIER;
	table['Z'] = STATE_IDENTIFIER;
	table['!'] = STATE_OPERATOR;
	table['%'] = STATE_OPERATOR;
	table['&'] = STATE_OPERATOR;
	table['+'] = STATE_OPERATOR;
	table['-'] = STATE_OPERATOR;
	table['/'] = STATE_OPERATOR;
	table['*'] = STATE_OPERATOR;
	table['('] = STATE_OPERATOR;
	table[')'] = STATE_OPERATOR;
	table['['] = STATE_OPERATOR;
	table[']'] = STATE_OPERATOR;
	table['|'] = STATE_OPERATOR;
	table['^'] = STATE_OPERATOR;
	table['~'] = STATE_OPERATOR;
	table['='] = STATE_OPERATOR;
	table['<'] = STATE_OPERATOR;
	table['>'] = STATE_OPERATOR;
	table['?'] = STATE_OPERATOR;
	table['.'] = STATE_OPERATOR;
	return (table[ch]);
}

void fsm_dispose(Fsm *self)
{
	assert(self != NULL);
	if (self)
	{
		assert(self->mem != NULL);
		self->mem->dealloc(self);
	}
}
