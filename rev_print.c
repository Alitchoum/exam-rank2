#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int main(int ac, char **av)
{
	int len;
	int i;

 	if (ac != 2)
 	{
		write(1, "\n",1);
		return (0);
 	}
	len = ft_strlen(av[1]);

	i = len - 1;
	while (i >= 0)
	{
		write(1, &av[1][i], 1);
		i--;
	}
	write(1, "\n",1);
	return (0);
}