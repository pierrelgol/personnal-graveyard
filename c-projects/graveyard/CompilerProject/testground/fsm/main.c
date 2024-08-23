#include <stdio.h>
#include <stdlib.h>

typedef enum e_state
{
	STATE_SKIP,
	STATE_EOF,
	STATE_COMMENT,
	STATE_IDENTIFIER,
	

}FSM_State;
