char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// Test
#include <stdio.h>
int main(void)
{
	char *result;
	result = ft_strpbrk("Hello how are you", "wz6");
	printf("%s\n", result);
	return (0);
}
