#include <stdio.h>

void	print_bits(unsigned char octet);

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char bit;
	unsigned char reverse;
	int	i;

	i = 0;
	reverse = 0;
	while (i < 8)
	{
		bit = (octet >> i) & 1;
		reverse |=(bit << (7 - i));
		i++;
	}
	return (reverse);
}

int	main(void)
{
	unsigned char octet;
	unsigned char result;

	octet = '2';
	print_bits(octet);
	printf("\n");
	result = reverse_bits(octet);
	print_bits(result);
	return (0);
}