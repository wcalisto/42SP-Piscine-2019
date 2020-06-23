#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write (1, &*str++, 1);
}

int	main(void)
{
	int a;
	int b;

	a = 2;
	b = 4;

	ft_putstr(a+"0");
	ft_putstr("\n");

	return (0);
}
		


