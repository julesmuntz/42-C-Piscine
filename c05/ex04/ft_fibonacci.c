/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:29:37 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/21 17:55:12 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	if (index <= -1)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*

#include <stdio.h>
#include <stdlib.h>
int	main(int arc, char *arv[])
{
	int i;
	if (arc == 2)
	i = atoi(arv[1]);
	printf("%d\n", ft_fibonacci(i));
}

*/
