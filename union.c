#include <unistd.h>
#include <stdio.h>

int	ft_comp(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
                return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int j;
	int	len;
	char	temp[256];

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			if (ft_comp(temp, av[1][i], len) == 0)
			{
				temp[len] = av[1][i];
				len++;
				write(1, &av[1][i], 1);
			}
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			if (ft_comp(temp, av[2][j], len) == 0)
			{
				temp[len] = av[2][j];
				len++;
				write(1, &av[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
