/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_helpers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:29:26 by pollivie          #+#    #+#             */
/*   Updated: 2023/09/24 22:29:27 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_HELPERS_H
# define NUM_HELPERS_H

# include "num_base.h"

int	helpers_strlen(char *str);
int	helpers_is_space(char c);
int	helpers_is_digit(char c);
int	helpers_atoi(char *str);

#endif
