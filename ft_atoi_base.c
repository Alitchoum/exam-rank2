
int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;
	int value;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	value = 0;
	if (str_base < 2 || str_base > 16)
		return (-1);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'f')
			value = (str[i] - 'a') + 10;
	 	else if (str[i] >= 'A' && str[i] <= 'F')
			value  = (str[i] - 'A') + 10;
		else if (str[i] >= '0' && str[i]<= '9')
			value  = str[i] - '0';
		else
			break ;
		if (value > str_base)
			return (-1) ;
		result = (result * str_base) + value;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int	nb;
	if (ac != 3)
		return (-1);
	nb = atoi(av[2]);
	printf("le resultat est %d", ft_atoi_base(av[1], nb));
	return (0);
}