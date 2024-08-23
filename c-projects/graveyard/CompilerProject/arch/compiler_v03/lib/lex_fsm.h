#ifndef LEX_FSM_H
#define LEX_FSM_H

#include "lex_memory.h"
#include <assert.h>

#include <stdio.h>

#define TABLE_SIZE 256

typedef enum
{
	STATE_ERROR = 0,
	STATE_IGNORE = 1,
	STATE_WHITESPACE,
	STATE_IDENTIFIER,
	STATE_OPERATOR,
	STATE_PUNCTUATOR,
	STATE_DIRECTIVE,
	STATE_LINE_BREAK,
	STATE_NUMBER,
	STATE_START_OF_FSM,
	STATE_END_OF_FSM,

} FsmState;

typedef struct
{
	FsmState meaning;

} FsmEntry;

typedef struct
{
	FsmEntry at[TABLE_SIZE];

} FsmLookup;

typedef FsmState (*update)(int ch);

typedef struct s_Fsm
{
	FsmState prev;
	FsmState next;
	FsmState curr;
	FsmState save;
	FnMem   *mem;
	update	get_state;

} Fsm;

Fsm     	*fsm_init(FnMem *mem);
FsmState	fsm_get_state(int ch);
void    	 fsm_dispose(Fsm *self);


#endif
