#include <unistd.h>

void	rot(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] >= 'A' && str[i] <= 'Z')
			c = ((c - 'A' + 13) % 26) + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			c = ((c - 'a' + 13) % 26) + 'a';
		write (1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot(argv[1]);
	write (1, "\n", 1);
	return (0);
}