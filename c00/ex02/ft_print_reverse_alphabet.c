/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:51:34 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/07 20:04:28 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rettel;

	rettel = 'z';
	while (rettel >= 'a')
	{
		write(1, &rettel, 1);
		rettel--;
	}
}
