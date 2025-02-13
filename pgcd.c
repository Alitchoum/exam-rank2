
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int temp;

	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	printf("%u\n", a);
	return (0);
}