#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	while (i-- > 0)
	{
		bit = (octet >> i & 1) + 48;
		write (1, &bit, 1);
	}
}

int main()
{
	unsigned char octet = 2;
	print_bits(octet);
}