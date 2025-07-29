#include <unistd.h>

void	alpha_mirror(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			c = (25 - (c - 'A') + 'A');
		else if (c >= 'a' && c <= 'z')
			c = (25 - (c - 'a') + 'a');
		write (1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write (1, "\n", 1);
	return (0);
}