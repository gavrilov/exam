int   	 count_of_2(int n)
{
	int result;
	int	tmp;

	result = 0;
	if (n > 1)
	{
		while (n > 0)
		{
			tmp = n;
			while (tmp > 1)
			{
				if (tmp % 10 == 2)
					result++;
				tmp /= 10;
			}
			n--;
		}
	}
	return (result);
}
