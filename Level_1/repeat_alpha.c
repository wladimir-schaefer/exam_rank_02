#include <unistd.h>

int	rep(char a)
{
	if (a >= 65 && a <= 90)
		return (a - 64);
	if (a >= 97 && a <= 122)
		return (a - 96);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int r;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			r = rep(argv[1][i]);
			if (r)
			{
				while (r--)
					write (1, &argv[1][i], 1);
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}