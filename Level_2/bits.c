unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;

	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

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
	write (1, "\n", 1);
}

int main()
{
	unsigned char c = 2;
	unsigned char reversed = reverse_bits(c);
	print_bits(c);
	print_bits(reversed);
}