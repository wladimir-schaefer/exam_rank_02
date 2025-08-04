#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	i;
	int	*arr;
	
	len = 0;
	i = 0;
	if (end - start < 0)
		len = (end - start) * -1 + 1;
	else
		len = end - start + 1;
	arr = malloc(len * sizeof(int));
	if (!arr)
		return (NULL);
	while (i < len)
	{
		if (start < end)
			arr[i] = start++;
		else
			arr[i] = start--;
		i++;
	}
	return (arr);
}
#include <stdio.h>
int	main()
{
	int start = -1;
	int end = 3;
	int	i = 0;
	int *arr = ft_range(start, end);
	int len;
	if (end - start < 0)
		len = (end - start) * -1 + 1;
	else
		len = end - start + 1;
	if (len < 0)
		len = -len;

	while (i < len)
	{
		printf("i %d = %d\n", i, arr[i]);
		i++;
	}
}