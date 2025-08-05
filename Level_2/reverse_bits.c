#include <stdio.h>

// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int		i = 8;
// 	unsigned char	res = 0;

// 	while (i--)
// 	{
// 		res = res * 2 + (octet % 2);
// 		octet = octet >> 1;
// 	}
// 	return (res);
// }

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char res = 0;
	int i = 8;

	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return res;
}

int main()
{
	printf("%d\n", reverse_bits(70));
}