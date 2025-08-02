#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	int		match;

	i = 0;
	while(s[i])
	{
		j = 0;
		match = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
			j++;
		}
		if (match == 0)
			break;
		i++;
	}
	return (i);
}