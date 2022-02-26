/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:17:40 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/22 03:49:38 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*

#include <stdio.h>
#include <stdlib.h>
int main(int arc, char *arv[])
{
	int n;
	if (arc == 2)
	n = atoi(arv[1]);
	printf("%d\n", ft_is_prime(n));
}

*/
