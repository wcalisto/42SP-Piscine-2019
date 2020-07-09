#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	int i;
	char *c;

	c = "teste";
	i = ft_strlen(c);
	printf("string %s, len %d\n", c, i); 
	return (0);
}
