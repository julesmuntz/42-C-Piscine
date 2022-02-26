/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:11:04 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/17 15:33:03 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*

#include <stdio.h>

int	main(int arc, char *arv[])
{
	if (arc == 2)
		printf("%d\n", (ft_strlen(arv[1])));
}

*/
