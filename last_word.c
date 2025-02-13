
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
	
	int len;
	int i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	len = ft_strlen(av[1]) - 1;
	while (av[1][len] &&(av[1][len] == ' ' || av[1][len] == '\t'))
		len--;
	i = len;
	printf("len = %d\n", len);
	while (len > 0 && (av[1][len - 1] != ' ' && av[1][len - 1] != '\t'))
		len--;
	printf("len = %d\n", len);
	while (av[1][len] && len <= i)
	{
		write(1, &av[1][len], 1);
		len++;
	}
	write(1, "\n", 1);
	return (0);
}