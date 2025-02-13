#include <unistd.h>
#include <stdio.h>
#include <limits.h>

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

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void tab_mult(char *str)
{
	int nb = ft_atoi(str);
	int result = 0;
	int i = 1;

	if (nb * 9 <= INT_MAX)
	{
		while (i <= 9)
		{
			result = i * nb;
			ft_putnbr(i);
			ft_putstr(" * ");
			ft_putstr(str);
			ft_putstr (" = ");
			ft_putnbr(result);
			ft_putstr ("\n");
			i++;
		}
	}
	return ;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	tab_mult(av[1]);
	return (0);
}