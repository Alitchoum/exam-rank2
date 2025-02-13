#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet);

unsigned char	swap_bits(unsigned char octet)
{
	// unsigned char left;
	// unsigned char right;

	// left = octet >> 4;
	// right = octet << 4;
	// return (left | right);
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	unsigned char octet;
	unsigned char result;

	octet = '2';
	print_bits(octet);
	result = swap_bits(octet);
	printf("\n");
	print_bits(result);

	return (0);
}