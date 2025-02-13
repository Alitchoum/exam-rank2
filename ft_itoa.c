#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int calcul_len(int nbr)
{
	int len;

	len = 0;
	if (nbr < 0)
		len++;
	if (nbr >= 0 && nbr <= 9)
		len++;
	else
		while (nbr != 0)
		{
			nbr /= 10;
			len++;
		}
	printf("len = %d\n", len);
	return (len);
}

char *ft_itoa(int nbr)
{
	char *str;
	int i;
	int len;

	len = calcul_len(nbr);
	nbr = (long)nbr;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[i] = (nbr % 10) + '0';
	str[len] = '\0';
	while (nbr > 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		printf("nbr apres modulo = %d\n", nbr);
		printf("str[i] = %c index = %d\n", str[i], i);
		len--;
		nbr = nbr / 10;

	}
	return (str);
}

int main(void)
{
	char *str;
	int nbr;

	nbr = -8883;
	str = ft_itoa(nbr);
	printf("apres itoa %s\n", str);
	return (0);
}