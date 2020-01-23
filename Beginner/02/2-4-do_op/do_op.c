#include <stdlib.h>
#include <stdio.h>

 int	main(int ac, char **av)
{
	int a;
	int b;
	char operator;

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		operator = av[2][0];
		if (operator == '/' && b != 0)
			printf("%i", a / b);
		else if (operator == '+')
			printf("%i", a + b);
		else if (operator == '-')
			printf("%i", a - b);
		else if (operator == '*')
			printf("%i", a * b);
		else if (operator == '%' && b != 0)
			printf("%i", a % b);
	}
	printf("\n");
	return (0);
}
