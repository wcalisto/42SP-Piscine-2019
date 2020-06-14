/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+    */
/*   By: wcalisto@student.42sp.org.br               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 14:14:11 by wcalisto          #+#    #+#             */
/*   Updated: 2020/06/14 14:14:11 by wcalisto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long x;

	x = nb;
	if (x< 0)
	{
		ft_putchar('-');
		x = x * -1;
	}
	if (x / 10 > 0)
		ft_putnbr(x / 10);
	ft_putnbr(x % 10 + '0');
}
