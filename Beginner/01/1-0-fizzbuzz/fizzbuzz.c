#include <unistd.h>

int		ft_putnbr(int i)
{
	char c;

	if (i >= 0 && i <= 9)
	{
		c = i + '0';
		write(1, &c , 1);
		return (0);
	}
	ft_putnbr(i / 10);
	i %= 10;
	c = i + '0';
	write(1, &c, 1);
	return (0);

}

int		main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
