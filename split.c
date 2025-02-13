#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int count_words(char *str)
{
	int count;
	int i;
	int flag;

	count = 0;
	flag = 0;
	i = 0;
	while (str[i])
	{
		if (!is_space(str[i]) && flag == 0 )
		{
			count++;
			flag = 1;
		}
		else if (is_space(str[i]))
			flag = 0;
		i++;
	}
	printf("nb de mot = %d\n", count);
	return (count);
}

char *alloc_word(char *str)
{
	int i;
	int len;
	char *word;

	i = 0;
	len = 0;
	while(str[len] && !is_space(str[len]))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	char **tab;
	int len;
	int i;
	int j;

	len = count_words(str);
	tab = malloc(sizeof(char*) * (len + 1));
	i = 0;
	j = 0;
	while(str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
		{
			tab[j] = alloc_word(str + i);
			j++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int main(void)
{
	char str[] = "hello you";
	char **s;
	int i;

	s = ft_split(str);
	i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		free(s[i]);
		i++;
	}
	free(s);
}