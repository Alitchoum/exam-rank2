#include <stdio.h>
#include <unistd.h>

int 	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void lowercase(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}
int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void capitalizer(char *str)
{
	int	i = 0;
	lowercase(str);
	while (str[i])
	{
		if (is_alpha(str[i]) && i == 0)
			str[i] -= 32;
		else if ((is_alpha(str[i]) && is_space(str[i - 1])))
		{
			str[i] -= 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	int i = 1;
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