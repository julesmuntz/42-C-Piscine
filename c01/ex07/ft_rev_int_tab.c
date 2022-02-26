/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:16:26 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/10 17:40:08 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temporary;
	int	frst;
	int	last;

	frst = 0;
	last = (size - 1);
	while (frst < last)
	{
		temporary = tab[frst];
		tab[frst] = tab[last];
		tab[last] = temporary;
		frst++;
		last--;
	}
}

/*

#include <stdio.h>

int 	main()
{
	int i = 0;
	int tab[4] = {1,0,2,4};

	ft_rev_int_tab(tab, 4);
	while (i < 4)
		printf("%d ", tab[i++]);
}

*/
