#include <unistd.h>

void	search_and_replace(char *str, char a, char b)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			write (1, &b, 1);
		else
			write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write (1, "\n", 1);
	return (0);
}