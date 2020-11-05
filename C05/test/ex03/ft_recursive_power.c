#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (nb < 0 || power < 0)
			return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

int		main(void)
{
	int a;
	int b;

	a = 2;
	b = 3;
	ft_recursive_power(a, b);
	printf("my : %d\n", ft_recursive_power(a, b));
	return (0);
}
