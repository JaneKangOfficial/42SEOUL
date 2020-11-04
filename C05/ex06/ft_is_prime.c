#include <stdio.h>

int	ft_is_prime(int nb)
{
	long long i;

	if (nb < 2)
		return (0);
	i = 2;
	while(i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	int a;

	a = 5;
	ft_is_prime(a);
	printf("my : %d\n", ft_is_prime(a));
	return (0);
}
