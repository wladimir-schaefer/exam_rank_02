#include <unistd.h>

void	ft_putnbr(int n)
{
	char	a;

	if (n > 9)
	{
		ft_putnbr (n / 10);
		n = n % 10;
	}
	a = n + '0';
	write (1, &a, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (!(i % 3) && !(i % 5))
			write (1, "fizzbuzz", 8);
		else if (!(i % 3))
			write (1, "fizz", 4);
		else if (!(i % 5))
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
