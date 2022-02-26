/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:29:16 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/14 19:23:50 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] == 0) || (str[i] >= '0' && str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*

#include <stdio.h>

int	main(int arc, char *arv[])
{
	if (arc == 2)
		printf("%d\n", ft_str_is_numeric(arv[1]));
}

*/
