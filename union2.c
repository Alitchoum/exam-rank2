#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i;
	int len;
	int j;
	char temp[256] = {0};

	i = 0;
	len = 0;
	while (av[1][i])
	{
		if (ft_strcmp(temp, av[1][i]) == 0)
		{
			temp[len] = av[1][i];
			len++;
			//write(1, &av[1][i], 1);
		}
		i++;
		printf("len = %d, i = %d\n", len, i);
		printf("%s\n", temp);
	}
	j = 0;
	while (av[2][j])
	{
		if (ft_strcmp(temp, av[2][j]) == 0)
		{
			temp[len] = av[2][j];
			len++;
			write(1, &av[2][j], 1);
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}