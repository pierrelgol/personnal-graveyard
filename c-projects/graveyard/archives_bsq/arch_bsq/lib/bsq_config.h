#ifndef BSQ_CONFIG_H
#define BSQ_CONFIG_H
#include "bsq.h"

bool	config_extract(t_config *self, t_file *file);
void	config_check(t_config *c);
void	config_match(t_config *c, t_file *file);

#endif

