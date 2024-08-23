/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:02:14 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 18:03:42 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define FT_POINT_H

typedef struct s_point
{
	int x;
	int y;
}			   t_point;

void set_point(t_point *point);

#endif
