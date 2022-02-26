/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:27:49 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/07 21:31:10 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_modn(int n)
{
	int	div;
	int	mod;

	div = n / 10 + 48;
	mod = n % 10 + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_combn(void)
{
	int	tab[size];

	tab[0] = 0;
	while (tab[0] <= tab[size])
	{
		tab[0] + 1;
		ft_div_modn(tab[0]);
		if (tab[0] != tab[size])
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
		tab[size]++;
	}
}

/*WIP*/
