#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			av[1][i] += 32;
			if (i != 0)
				write(1, "_", 1);
		}
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
        return (0);
}
