#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
			av[1][i] = ('z' + 'a') - av[1][i];
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			av[1][i] = ('Z' + 'A') - av[1][i];
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}