
#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *tab;
	int len;
	int i;

	if (start > end)
		len = (start - end) + 1;
	else
		len = (end - start) + 1;
	i = 0;
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	if (start > end)
	{
		while (start >= end)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	else
	{
		while (end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	return (tab);
}

int main(void)
{
	int *tab;
	int start;
	int end;
	int i;
	int len;

	start = 0;
	end = -3;
	i = 0;
	if (start > end)
		len = (start - end) + 1;
	else
		len = (end - start) + 1;
	tab = ft_rrange(start, end);
	while (i < len)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}