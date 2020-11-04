#include <stdio.h>

int		ft_is_prime(int nb)
{
	long long i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % 1 == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int	main(void)
{
	int a;

	a = 6;
	ft_find_next_prime(a);
	printf("my : %d\n", ft_find_next_prime(a));
	return (0);
}
