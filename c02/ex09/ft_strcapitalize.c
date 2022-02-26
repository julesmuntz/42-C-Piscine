/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:16:49 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/17 11:31:02 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	spec_char(int i, char *str)
{
	if (str[i] >= 'A' && str[i] <= 'Z'
		&& ((str[i -1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
	{
		str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] >= ' ' && str[i - 1] <= '/'
			&& str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i - 1] >= ':' && str[i - 1] <= '@'
			&& str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i - 1] >= '[' && str[i - 1] <= '`'
			&& str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i - 1] >= '{' && str[i - 1] <= '~'
			&& str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		else
			(spec_char(i, str));
		i++;
	}
	return (str);
}

/*

#include <stdio.h>

int	main(int arc, char *arv[])
{
	if (arc == 2)
		printf("%s\n", ft_strcapitalize(arv[1]));
}

*/
