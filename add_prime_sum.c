#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	char c;
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	sign = 1;
	nb = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int is_prime(int nb)
{
	int i;
	if (nb < 2)
		 return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
return (1);
}

int sum_prime(int nb)
{
	int result;

	result = 0;
	while (nb > 1)
	{
		if (is_prime(nb))
			result = result + nb;
		nb--;
	}
	return (result);
}

int main(int ac, char **av)
{
	int nb;

	
	if (ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	nb = ft_atoi(av[1]);
	nb = sum_prime(nb);
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}