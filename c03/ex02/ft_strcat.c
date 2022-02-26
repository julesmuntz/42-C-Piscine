/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:26:27 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/23 00:29:18 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i[2];

	i[0] = 0;
	while (dest[i[0]])
		i[0]++;
	i[1] = 0;
	while (src[i[1]])
		dest[i[0]++] = src[i[1]++];
	dest[i[0]] = 0;
	return (dest);
}

/*

#include <stdio.h>
int main(int arc, char *arv[])
{
	if (arc == 3)
	printf("%s\n", ft_strcat(arv[1], arv[2]));
}

*/
