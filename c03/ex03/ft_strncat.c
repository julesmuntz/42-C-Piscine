/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 00:38:48 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/23 01:55:10 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i[2];

	i[0] = 0;
	while (dest[i[0]])
		i[0]++;
	i[1] = 0;
	while (src[i[1]] && i[1] < nb)
		dest[i[0]++] = src[i[1]++];
	dest[i[0]] = 0;
	return (dest);
}

/*

#include<stdio.h>
#include<stdlib.h>
int main(int arc, char *arv[])
{	
	if (arc == 4)
	printf("%s\n", ft_strncat(arv[1], arv[2], atoi(arv[3])));
}

*/
