/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_file.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:29:40 by pollivie          #+#    #+#             */
/*   Updated: 2023/09/24 22:29:42 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_FILE_H
# define NUM_FILE_H

# include "num_helpers.h"

t_file	*file_init(char *buffer);
bool	file_open(t_file *self, const char *path, int right_flag);
bool	file_read(t_file *self);
bool	file_write(t_file *self);
bool	file_dispose(t_file *self);

#endif
