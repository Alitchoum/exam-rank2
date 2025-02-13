#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_space(char c)
{
	if (c == ' ' ||  c == '\t')
		return (1);
	return (0);
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *first_word(char *str)
{
	char *first;
	int i;
	int j;

	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	j = 0;
	while (str[i + j] && !is_space(str[i + j]))
	{
		j++;
	}
	first = malloc(sizeof(char) * (j + 1));
	if (!first)
		return (NULL);
	j = 0;
	while (str[i + j] && !is_space(str[i]))
	{
		first[j] = str[i];
		i++;
		j++;
	}
	first[j] = '\0';
	return (first);
}

char *sentence(char *str, int i)
{
	char *sentence;
	int j;

	while (str[i] && is_space(str[i]))
		i++;
	sentence = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!sentence)
		return (NULL);
	j = 0;
	while (str[i])
	{
		if (str[i] == '\t')
		{
			sentence[j++] = ' ';
		}
		else
			sentence[j++] = str[i];
		i++;
	}
	sentence[j] = '\0';
	return (sentence);
}

int main(int ac, char **av)
{
	char *s1;
	char *s2;

	if (ac == 2)
	{
		s1 = first_word(av[1]);
		s2 = sentence(av[1], ft_strlen(s1));
		ft_putstr(s2);
		ft_putstr(" ");
		ft_putstr(s1);
		free(s1);
		free(s2);
	}
	write(1, "\n", 1);
	return (0);
}