#include <unistd.h>

void	rotone(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			c = (c - 'A' + 1) % 26 + 'A';
		else if (c >= 'a' && c <= 'z')
			c = (c - 'a' + 1) % 26 + 'a';
		write (1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write (1, "\n", 1);
	return (0);
}