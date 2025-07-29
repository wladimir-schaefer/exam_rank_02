#include <unistd.h>
#include <stdlib.h>

void	camel_to_snake(char *str)
{
	int	len_str;
	int	len_snake;
	int	words;
	int	i;
	char *snake;

	len_str = 0;
	words = 0;
	while (str[len_str])
	{
		if (str[len_str] >= 'A' && str[len_str] <= 'Z')
			words++;
		len_str++;
	}
	len_snake = len_str + words + 2;
	snake = malloc(len_snake);
	if (!snake)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			snake[i++] = str[i] + 32;
			snake[i] = '_';
		}
		snake[i] = str[i]
	}
	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write (1, "\n", 1);
	return (0);
}