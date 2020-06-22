#include <unistd.h>


void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	int a;
	int *b;
	int **c;
	int ***d;

	a = 4;
	b = &a;
	c = &b;
	d = &c;

	ft_putchar(***d+48);
	return (0);
}
