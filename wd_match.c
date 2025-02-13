#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main(int ac, char **av)
{
	int i;
	int j;
	int k;
	char temp[256];

	k = 0;
	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					temp[k] = av[1][i];
					k++;
					break;
				}
				j++;
			}
			i++;
		}
		if (ft_cmp(av[1], temp) == 0)
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}