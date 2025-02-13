#include <unistd.h>
#include <stdio.h>

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void minuscule(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

void capitalizer(char *str)
{
	int i;

	minuscule(str);
	i = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) && (!is_alpha(str[i + 1]) || (str[i + 1] == '\0')))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	int i;

	i = 1;
	
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < ac)
	{
		capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}