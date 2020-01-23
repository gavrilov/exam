#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			write(1, &argv[1][i], 1);
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
			while (j < i)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
