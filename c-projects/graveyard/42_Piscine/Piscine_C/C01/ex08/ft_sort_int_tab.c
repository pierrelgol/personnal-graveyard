/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:44:19 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/16 18:49:56 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The algorithm used here is Insertion sort the reason being that it's a very
	simple algorithm with a good efficiency on relatively small set (E < 10 000)
	the algorithm function in the following steps.

	[1] - we make sure that the array is at leat of size two, as less would
		  already be sorted.
	[2] - we set our first pointer to point to tab[1]
	[3] - we enter the outer loop and we will iterate until ptab has reached
		  the end of the array tab.
	[4] - we enter the inner loop if ptab - 1 (aka tab[x - 1]) is greater than
		  ptab (aka tab[x])
	[5] - we swap the elements and decrease ptab by one.
	[6] - if ptab is still greater than tab we go back to [4]
		  else we exit the loop
	[7] - we continue forward by increasing ptab untill the array is sorted.

	Insertion sort is simple and easy to understand, it's efficient with small
	data set, it's very efficient in memory use, as it's sorting in place.

	the worst case scenario for insertion sort is   : O(n^2)
	the average case scenario for insertion sort is : 0(n^2)
	the best case scenario for insertion sort is    : 0(n)
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	*ptab;

	if (tab != (void *)0 && size >= 2)
	{
		ptab = (tab + 1);
		while (ptab < (tab + size))
		{
			while (ptab > tab && *(ptab - 1) > *(ptab))
			{
				temp = *ptab;
				*ptab = *(ptab - 1);
				*(ptab - 1) = temp;
				--ptab;
			}
			++ptab;
		}
	}
}
