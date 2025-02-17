
#include <unistd.h>

void print_b(unsigned int octet)
{
	int i;

	i = 7;
	while (i >= 0)
	{
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char bit;
	int i;

	i = 0;
	bit = 0;
	while (i < 8)
	{
		bit = (bit << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (bit);
}

int main(void)
{
	unsigned char octet;

	octet = reverse_bits(2);
	print_b(octet);
}