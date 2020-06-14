/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+    */
/*   By: wcalisto@student.42sp.org.br               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 19:07:10 by wcalisto          #+#    #+#             */
/*   Updated: 2020/06/13 19:07:10 by wcalisto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int i;
	
	i = 'z';
	while (i >= 'a')
		ft_putchar(i--);
}
