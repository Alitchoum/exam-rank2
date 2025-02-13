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
	char s[] = "1234";
	char reject[] = "1234";

	printf("%zu\n", ft_strcspn(s, reject));
	printf("%zu\n", strcspn(s, reject));
}