#include <unistd.h>
#include <stdio.h>

unsigned int ft_atoi(char *str)
{
	unsigned int  i;
	unsigned int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

void print_hex(int nb)
{
	char base[] = "0123456789abcdef";

	if (nb >= 16)
		print_hex(nb / 16);
	write(1, &base[nb % 16], 1);
}

int main(int ac, char **av)
{
	unsigned int nb;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		print_hex(nb);
	}
	write(1, "\n", 1);
	return (0);
}