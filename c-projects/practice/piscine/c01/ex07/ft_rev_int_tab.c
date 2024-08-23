/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:28:17 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/16 18:42:04 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*ptab;
	int	temp;

	if (tab != (void *)0 && size >= 2)
	{
		ptab = tab;
		while (ptab < &tab[--size])
		{
			temp = *ptab;
			*ptab++ = tab[size];
			tab[size] = temp;
		}
	}
}
