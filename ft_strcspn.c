#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int main (void)
{
	char s[] = "a";
	char reject[] = "b";

	printf("Moi: %zu\n", ft_strcspn(s, reject));
	printf("Man: %zu\n", strcspn(s, reject));
	return (0);
}