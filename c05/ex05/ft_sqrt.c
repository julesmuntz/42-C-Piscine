/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:57:22 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/22 17:26:24 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i <= 46340)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

/*

#include <stdio.h>
#include <stdlib.h>
int main(int arc, char *arv[])
{
	int n;
	if (arc == 2)
	n = atoi(arv[1]);
	printf("%d\n", ft_sqrt(n));
}

*/
