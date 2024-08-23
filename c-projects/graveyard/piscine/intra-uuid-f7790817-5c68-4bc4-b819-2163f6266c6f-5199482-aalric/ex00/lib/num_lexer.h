/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_lexer.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:30:18 by pollivie          #+#    #+#             */
/*   Updated: 2023/09/24 22:30:22 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_LEXER_H
# define NUM_LEXER_H
# include "num_base.h"
# include "num_print.h"

t_token	*lexer_tokenize(t_file *file);
int		lexer_isspace(char ch);
int		lexer_isprintable(char ch);
int		lexer_is_separator(char ch);
int		lexer_isalnum(char ch);
int		lexer_token_count(char *buffer);

#endif
