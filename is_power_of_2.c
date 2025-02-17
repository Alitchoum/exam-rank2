#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	unsigned int power;

	power = 1;
	while (power < n)
		power *= 2;
	if (power == n)
		return (1);
	return (0);
}

int main(void)
{
    printf("oui %d\n", is_power_of_2(1));   // 1 (2^0)
    printf("oui %d\n", is_power_of_2(2));   // 1 (2^1)
    printf("oui %d\n", is_power_of_2(4));   // 1 (2^2)
    printf("oui %d\n", is_power_of_2(8));   // 1 (2^3)
    printf("oui %d\n", is_power_of_2(16));  // 1 (2^4)

    printf("non %d\n", is_power_of_2(0));   // 0
    printf("non %d\n", is_power_of_2(3));   // 0
    printf("non %d\n", is_power_of_2(5));   // 0
    printf("non %d\n", is_power_of_2(6));   // 0
    printf("non %d\n", is_power_of_2(10));  // 0

    return (0);
}
