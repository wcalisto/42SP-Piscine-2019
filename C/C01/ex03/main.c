/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+    */
/*   By: wcalisto@student.42sp.org.br               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 08:08:43 by wcalisto          #+#    #+#             */
/*   Updated: 2020/06/27 08:08:43 by wcalisto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int *c;
	int *d;

	a = 10;
	b = 5;
	c = &div;
	d = &mod;

	ft_div_mod(a, b, c, d);
	printf("%d div %d = %d, mod %d",a ,b ,c ,d);
	return (0);
}
