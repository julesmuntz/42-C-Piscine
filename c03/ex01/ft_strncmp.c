/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:37:37 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/23 01:54:02 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != 0 && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*

#include<stdio.h>
#include<stdlib.h>
int main(int arc, char *arv[])
{	
	int result;
	if (arc == 4)
	{
		result = ft_strncmp(arv[1], arv[2], atoi(arv[3]));
		printf("%d\n", result);
	}
}

*/
