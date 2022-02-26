/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:25:27 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/22 02:01:36 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*

#include <stdio.h>
#include <stdlib.h>
int main(int arc, char *arv[])
{
	int nb, pw;
	if (arc == 3)
	{
		nb = atoi(arv[1]);
		pw = atoi(arv[2]);
		printf("%d\n", ft_iterative_power(nb, pw));
	}
	else
		printf("%s\n", "error: 2 arguments required");
}

*/
