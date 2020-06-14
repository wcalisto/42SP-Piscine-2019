/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+    */
/*   By: wcalisto@student.42sp.org.br               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 20:05:08 by wcalisto          #+#    #+#             */
/*   Updated: 2020/06/13 20:05:08 by wcalisto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a = '0';
	while (a <= '7')
	{
		b = '0';
		while (b <= '8')
		{
			c = '0';
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb();
	return(0);
}
