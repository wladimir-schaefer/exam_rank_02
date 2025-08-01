#include <stdlib.h>
#include <unistd.h>

int	calculate(int a, int b, char sign)
{
	if(sign == '+')
		return (a + b);
	if(sign == '-')
		return (a - b);
	if(sign == '*')
		return (a * b);
	if(sign == '/')
		return (a / b);
	if(sign == '%')
		return (a % b);
	return (0);
}
void ft_putnbr(int i)
{
	char	c;

	if (i < 0)
	{
		write (1, "-", 1);
		i = -i;
	}
	while (i > 9)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	c = i + '0';
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	res;
	char sign;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		sign = argv[2][0];
		res = calculate(a, b, sign);
		ft_putnbr(res);
	}
	write (1, "\n", 1);
}