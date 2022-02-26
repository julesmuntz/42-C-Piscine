/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:25:43 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/21 13:17:43 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
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
		printf("%d\n", ft_recursive_power(nb, pw));
	}
	else
		printf("%s\n", "error: 2 arguments required");
}

*/
