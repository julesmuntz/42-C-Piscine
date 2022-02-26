/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:00:15 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/23 01:53:34 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != 0 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*

#include<stdio.h>
int main(int arc, char *arv[])
{	
	int result;
	if (arc == 3)
	{
		result = ft_strcmp(arv[1], arv[2]);
		printf("%d\n", result);
	}
}

*/
