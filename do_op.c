#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	result;

	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	result = 0;
	if (av[2][0] == '+')
		printf("%d", (result = a + b));
	else if (av[2][0] == '-')
                printf("%d", (result = a - b));
	else if (av[2][0] == '*')
                printf("%d", (result = a * b));
	else if (av[2][0] == '/')
                printf("%d", (result = a / b));
	else if (av[2][0] == '%')
                printf("%d", (result = a % b));
	printf("\n");
	return (0);
}
