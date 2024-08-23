#ifndef DRIVER_H
#define DRIVER_H

#include "lex_file.h"
#include "lex_fsm.h"
#include "lex_memory.h"
#include "lex_scanner.h"
#include "lex_token.h"
#include "lex_tokenizer.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int driver_init_lexing_process(char *path);

#endif
