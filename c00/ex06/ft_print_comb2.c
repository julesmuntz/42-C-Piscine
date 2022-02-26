/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 09:24:35 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/07 19:54:07 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod2(int n)
{
	int	div;
	int	mod;

	div = n / 10 + 48;
	mod = n % 10 + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int	tab[2];

	tab[0] = 0;
	while (tab[0] <= 98)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 99)
		{
			ft_div_mod2(tab[0]);
			write(1, " ", 1);
			ft_div_mod2(tab[1]);
			if (tab[0] != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
