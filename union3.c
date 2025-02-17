#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
void ft_union(char *s1, char *s2)
{
	int i;
	int len;
	char seen[256] = {0};

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (!ft_strcmp(seen, s1[i], len))
		{
			seen[len] = s1[i];
			len++;
			write(1, &s1[i], 1);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!ft_strcmp(seen, s2[i], len))
		{
			seen[len] = s2[i];
			len++;
			write(1, &s2[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}