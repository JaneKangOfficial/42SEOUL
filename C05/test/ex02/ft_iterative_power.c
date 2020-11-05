#include <stdio.h>

int	ft_interative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	while (power)
	{
		result *= nb;
		power--;
	}
	return result;
}

int		main(void)
{
	int a;
	int b;

	a = 2;
	b = 3;
	ft_interative_power(a, b);
	printf("my : %d\n", ft_interative_power(a, b));
	return (0);
}
