#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char *camel_to_snake(char *str)
{
	int i;
	int j;
	int len;
	char *camel;
	
	i = 0;
	len = 0;
	while (str[i])
	{
		if (uppercase(str[i]))
			len++;
		len++;
		i++;
	}
	camel = malloc(sizeof(char) * (len + 1));
	if (!camel)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (uppercase(str[i]))
		{
			if (i != 0)
			{
				camel[j++] = '_';
			}
			camel[j++] = str[i] + 32;
		}
		else
			camel[j++] = str[i];
		i++;
	}
	camel[j] = '\0';
	write(1, camel, len);
	return (camel);
}

int main(int ac, char **av)
{
	char *camel;

	if (ac == 2)
	{
		camel = camel_to_snake(av[1]);
		if (camel)
			free(camel);
	}
	write(1, "\n", 1);
	return(0);
}
