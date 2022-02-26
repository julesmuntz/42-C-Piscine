/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:45:17 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/19 15:09:13 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n += 48;
		write(1, &n, 1);
	}
}

/*

#include <stdlib.h>

int main(int arc, char *arv[])
{
	int n = atoi(arv[1]);
	if (arc == 2)
		ft_putnbr(n);
}

*/
