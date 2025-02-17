
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i;
	int len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len > 0 && (av[1][len - 1] == ' ' || av[1][len - 1] == '\t'))
			len--;
		i = len;
		while (i > 0 && (av[1][i - 1] != ' ' && av[1 - 1][i] != '\t'))
			i--;
		if (i < len)
			write(1, &av[1][i], len - i);
	}
	write(1, "\n", 1);
	return (0);
}