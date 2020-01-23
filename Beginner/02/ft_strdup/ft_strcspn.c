#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return(i);
}

// Test

#include <stdio.h>

int main(void)
{
	printf("%li\n", strcspn("Zhropa" , "illllkkkpk"));
	printf("%li\n", ft_strcspn("Zhropa" , "illllkkkpk"));
	return (0);
}
