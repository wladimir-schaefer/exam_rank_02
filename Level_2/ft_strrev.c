char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
		
	}
	return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strrev(argv[1]));
}