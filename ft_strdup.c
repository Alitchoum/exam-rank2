#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *src)
{
	int i;

	i = 0;
	while(src[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *cpy;
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int main(void)
{
	char src[] = "Hello World";
	char *cpy;
	
	cpy = ft_strdup(src);
	printf("%s\n", cpy);
	free(cpy);
	return (0);
}