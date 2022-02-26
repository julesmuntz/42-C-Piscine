/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:30:55 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/14 19:36:46 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] == 0) || (str[i] >= 'a' && str[i] <= 'z')))
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
		printf("%d\n", ft_str_is_lowercase(arv[1]));
}

*/
