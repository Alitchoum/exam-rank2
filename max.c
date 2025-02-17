
int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int max;

	if (!tab || (len == 0))
		return (0);
	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int main(void)
{
	//int tab[6];

	printf("Max = %d\n", max(NULL, 6));
	return (0);
}