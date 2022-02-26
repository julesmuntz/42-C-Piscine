/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:15:35 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/10 17:30:16 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temporary;
	int	index[2];

	index[0] = 0;
	while (index[0] < size)
	{
		index[1] = index[0] + 1;
		while (index[1] < size)
		{
			if (tab[index[0]] > tab[index[1]])
			{
				temporary = tab[index[0]];
				tab[index[0]] = tab[index[1]];
				tab[index[1]] = temporary;
			}
			index[1]++;
		}
		index[0]++;
	}
}

/*

#include <stdio.h>

int 	main()
{
	int i = 0;
	int tab[11] = {5,1,7,2,9,42,6,0,4,8,3};

	ft_sort_int_tab(tab, 11);
	while (i < 11)
		printf("%d ", tab[i++]);
}

*/
