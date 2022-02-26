/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:35:47 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/22 01:06:09 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (nb >= i)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*

#include <stdio.h>
#include <stdlib.h>
int main(int arc, char *arv[])
{
	int n;
	if (arc == 2)
	n = atoi(arv[1]);
	printf("%d\n", ft_iterative_factorial(n));
}

*/
