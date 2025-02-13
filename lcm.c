#include <stdio.h>

unsigned int hcf(unsigned int a, unsigned int b)
{
	unsigned int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	printf("%u\n", a);
	return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;

	if (a == 0 || b == 0)
		lcm = 0;
	lcm = (a * b) / hcf(a, b);
	return (lcm);
}

int main(void)
{
	int a;
	int b;

	a = 8;
	b = 12;
	printf("lcm pour (%u et %u) est = %u\n", a, b, lcm(a, b));
}