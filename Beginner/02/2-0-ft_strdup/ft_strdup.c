#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return NULL;
	while (len >= 0)
	{
		result[len] = src[len];
		len--;
	}
	return (result);
}

// Test
#include <stdio.h>
int main(void)
{
	char str[] = "Hello";
	char *result;

	result = ft_strdup(str);
	printf("%s\n", result);
	return (0);
}
